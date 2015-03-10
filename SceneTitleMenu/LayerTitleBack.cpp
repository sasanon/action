#include "LayerTitleBack.h"

USING_NS_CC;
LayerTitleBack* layertitleback;

// on "init" you need to initialize your instance
bool LayerTitleBack::init()
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

	// back-ground sprite
    auto sprite = Sprite::create("momiji.png");

    // position the sprite on the center of the screen
    sprite->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

	// add the sprite as a child to this layer
    this->addChild(sprite, 0);
    
    return true;
}
void LayerTitleBack::update (float delta)
{
}
