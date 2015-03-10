#include "LayerStageMap.h"

USING_NS_CC;

// on "init" you need to initialize your instance
bool LayerStageMap::init()
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

	map = TMXTiledMap::create("map/test.tmx");
	map->setAnchorPoint(Vec2::ZERO);
	this->addChild(map,  2);
    return true;
}
void LayerStageMap::update (float delta)
{
	static Vec2 v = Vec2::ZERO;
	v.x--;
	map->setPosition(v);
}

