#include "LayerTitleUI.h"
#include "../SceneStage/SceneStage.h"

USING_NS_CC;
LayerTitleUI* layertitleui;

// on "init" you need to initialize your instance
bool LayerTitleUI::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
	this->scheduleUpdate();
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
    auto closeItem = MenuItemImage::create(
                                           "logo/touch-to-start.png",
                                           "logo/touch-to-start.png",
                                           CC_CALLBACK_1(LayerTitleUI::menuCloseCallback, this));
    
	closeItem->setPosition(Vec2(origin.x + visibleSize.width/2 ,
                                origin.y + visibleSize.height/4));

    // create menu, it's an autorelease object
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 1);
    
	// make touch listener
	listener = EventListenerTouchOneByOne::create();
	listener->setSwallowTouches(true);
	listener->onTouchBegan = [&](Touch* touch, Event* event){
		this->getEventDispatcher()->removeEventListener(listener);
		return true;
	};
	this->getEventDispatcher()->addEventListenerWithFixedPriority(listener, 1);

	return true;
}
void LayerTitleUI::update (float delta)
{
}


void LayerTitleUI::menuCloseCallback(Ref* pSender)
{
	this->getEventDispatcher()->removeEventListener(listener);
	Director::getInstance()->replaceScene(SceneStage::create());
#if 0
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
	MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
    return;
#endif

    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
#endif
}
