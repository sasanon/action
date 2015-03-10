#include "SceneStage.h"
#include "LayerStageBack.h"
#include "LayerStageMap.h"
#include "LayerStageUI.h"
#include "LayerStageFront.h"

USING_NS_CC;

Scene* SceneStage::create()
{
    //////////////////////////////
    // 1. super init first
    auto scene = Scene::createWithPhysics();
    if ( !scene ){
        return false;
    }

    // add layer as a child to scene
    scene->addChild(LayerStageBack ::create(), 0);
    scene->addChild(LayerStageMap  ::create(), 1);
    scene->addChild(LayerStageUI   ::create(), 2);
    scene->addChild(LayerStageFront::create(), 3);

    // return the scene
    return scene;
}
