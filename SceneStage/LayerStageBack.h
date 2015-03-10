#ifndef __LayerStageBack_h__
#define __LayerStageBack_h__

#include "cocos2d.h"

class LayerStageBack : public cocos2d::Layer
{
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    virtual void update (float delta);
    
    // implement the "static create()" method manually
    CREATE_FUNC(LayerStageBack);
};

#endif
