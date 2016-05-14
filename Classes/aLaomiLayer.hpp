//
//  aLaomiLayer.hpp
//  myGame
//
//  Created by ZEROLEE on 16/5/11.
//
//

#ifndef aLaomiLayer_hpp
#define aLaomiLayer_hpp

#include <stdio.h>

class LaomiLayer: public cocos2d::Layer {
    
public:
     CREATE_FUNC(LaomiLayer);
    
    virtual bool init();
    
    void back();
};




#endif /* aLaomiLayer_hpp */
