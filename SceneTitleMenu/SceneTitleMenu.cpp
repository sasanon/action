#include "SceneTitleMenu.h"
#include "LayerTitleUI.h"
#include "LayerTitleFront.h"
#include "LayerTitleBack.h"

USING_NS_CC;

Scene* SceneTitleMenu::create()
{
    //////////////////////////////
    // 1. super init first
    auto scene = Scene::create();
    if ( !scene ){
        return false;
    }

    // add layer as a child to scene
    scene->addChild(LayerTitleBack ::create(), 0);
    scene->addChild(LayerTitleFront::create(), 1);
    scene->addChild(LayerTitleUI   ::create(), 2);

    // return the scene
    return scene;
}
