//
//  aLaomiScene.cpp
//  myGame
//
//  Created by ZEROLEE on 16/5/10.
//
//

#include "aLaomiScene.hpp"
#include "aLaomiLayer.hpp"
USING_NS_CC;

bool LaomiScene::init()
{
    if ( !Scene::init() )
    {
        return false;
    }
    auto layer = LaomiLayer::create();
    
    this->addChild(layer);
    
    return true;
}