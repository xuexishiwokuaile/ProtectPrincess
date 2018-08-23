//
//  Bullet.h
//  ProtectPrincess
//
//  Created by apple on 14-5-25.
//
//

#ifndef __ProtectPrincess__Bullet__
#define __ProtectPrincess__Bullet__

#include <iostream>
#include "cocos2d.h"
#include "SpriteBase.h"

// 炮弹类
class Bullet : public SpriteBase
{
private:
    bool _shoot = false; // 炮弹是否发射
public:
    static Bullet* create(const std::string& filename)
    {
        Bullet *sprite = new Bullet();
        if (sprite && sprite->initWithFile(filename))
        {
            sprite->autorelease();
            return sprite;
        }
        CC_SAFE_DELETE(sprite);
        return nullptr;
    }
    
    static Bullet* createWithSpriteFrameName(const std::string& filename)
    {
        Bullet *sprite = new Bullet();
        if (sprite && sprite->initWithSpriteFrameName(filename))
        {
            sprite->autorelease();
            return sprite;
        }
        CC_SAFE_DELETE(sprite);
        return nullptr;
    }
    
    
    void setShoot(bool shoot){ _shoot = shoot; }
    bool isShoot(){ return _shoot; }
};

#endif /* defined(__ProtectPrincess__Bullet__) */
