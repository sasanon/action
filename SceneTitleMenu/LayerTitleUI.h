#ifndef __LayerTitleUI_h__
#define __LayerTitleUI_h__

#include "cocos2d.h"

class LayerTitleUI : public cocos2d::Layer
{
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    virtual void update (float delta);
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(LayerTitleUI);
private:
	cocos2d::EventListenerTouchOneByOne* listener;
};

extern LayerTitleUI* layertitleui;

#endif
