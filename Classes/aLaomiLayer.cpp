//
//  aLaomiLayer.cpp
//  myGame
//
//  Created by ZEROLEE on 16/5/11.
//
//

#include "aLaomiLayer.hpp"
USING_NS_CC;

bool LaomiLayer::init()
{
    if (!cocos2d::Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    
    auto label = Label::createWithTTF("laoMiScene", "fonts/Marker Felt.ttf", 30);
    label->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
    
    
    
    
    auto spirt = Sprite::create("HelloWorld.png");
    spirt->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
    
    auto backLabel = Label::createWithTTF("back", "fonts/Marker Felt.ttf", 20);
    ccMenuCallback callback = CC_CALLBACK_0(LaomiLayer::back, this);
    auto backItem = MenuItemLabel::create(backLabel, callback);
    backItem->setPosition(Vec2(visibleSize.width+origin.x-backItem->getContentSize().width, origin.y+visibleSize.height-backItem->getContentSize().height/2));
    
    
    auto menu = cocos2d::Menu::create(backItem, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu,1);
    
    this->addChild(label, 1);

//    CCSpriteFrameCache * cache = CCSpriteFrameCache::sharedSpriteFrameCache();
//    cache -> addSpriteFramesWithFile("/res/laomi/kungFuPanda.plist");
//    
//    // ②创建第一帧，设置位置，增加到当前场景
    
//    cocos2d::Sprite sp = cocos2d::Sprite::createWithSpriteFrame("/res/laomi/kungFuPanda.png");
//
//    CCSprite *sp = CCSprite::createWithSpriteFrameName("/res/laomi/kungFuPanda.png");
//    sp -> setPosition(Point(visibleSize.width/3,visibleSize.height/2));
//    this -> addChild( sp );
    
    // ③创建集合，存每一张图片
//    Vector< SpriteFrame* > sfme = Vector< SpriteFrame* >::Vector();
//    char str[20] = {0};
//    for( int i = 1 ; i < 5 ; ++i )
//    {
//        // ④ 获取图片名字，增加到集合中
//        sprintf(str,"/res/laomi/panda%02d.png",i);
//        SpriteFrame *fname = cache -> spriteFrameByName( str );
//        sfme.pushBack( fname );
//    }
//    // ⑤ 创建动画，设置播放速度
//    CCAnimation *animation = CCAnimation::createWithSpriteFrames( sfme , 0.1f );
//    sp -> runAction ( CCRepeatForever::create(CCAnimate::create(animation )));
    return true;
}
void LaomiLayer::back()
{
    auto director = Director::getInstance();
    director->popToRootScene();
}