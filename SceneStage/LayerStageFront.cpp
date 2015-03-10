#include "LayerStageFront.h"

USING_NS_CC;

// on "init" you need to initialize your instance
bool LayerStageFront::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
//	this->scheduleUpdate();
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    return true;
}
void LayerStageFront::update (float delta)
{
}

