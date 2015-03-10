#ifndef __LayerStageMap_h__
#define __LayerStageMap_h__

#include "cocos2d.h"

class LayerStageMap : public cocos2d::Layer
{
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    virtual void update (float delta);
    
    // implement the "static create()" method manually
    CREATE_FUNC(LayerStageMap);
private:
	cocos2d::TMXTiledMap* map;
};

#endif
