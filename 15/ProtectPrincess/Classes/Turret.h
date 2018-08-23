//
//  Turret.h
//  ProtectPrincess
//
//  Created by apple on 14-5-25.
//
//

#ifndef __ProtectPrincess__Turret__
#define __ProtectPrincess__Turret__

#include <iostream>
#include "cocos2d.h"
#include "SpriteBase.h"
#include "Bullet.h"

// 炮塔类
class Turret : public SpriteBase
{
private:
    std::string _bulletName; // 炮塔发射的炮弹名称
    bool _select = false; // 炮塔是否被安放
    Bullet* _bullet = nullptr; // 炮塔关联的炮弹对象
public:
    
    // 静态的create函数
    static Turret* create(const std::string& filename)
    {
        Turret *sprite = new Turret();
        if (sprite && sprite->initWithFile(filename))
        {
            sprite->autorelease();
            return sprite;
        }
        CC_SAFE_DELETE(sprite);
        return nullptr;
    }
    
    static Turret* createWithSpriteFrameName(const std::string& filename)
    {
        Turret *sprite = new Turret();
        if (sprite && sprite->initWithSpriteFrameName(filename))
        {
            sprite->autorelease();
            return sprite;
        }
        CC_SAFE_DELETE(sprite);
        return nullptr;
    }
    // setter和getter函数
    void setBulletName(std::string bulletName){ _bulletName = bulletName; }
    std::string getBulletName(){ return _bulletName; }
    
    void setSelect(bool select){ _select = select; }
    bool isSelect(){ return _select; }
    
    void setBullet(Bullet* bullet){ _bullet = bullet; }
    Bullet* getBullet(){ return _bullet; }

};

#endif /* defined(__ProtectPrincess__Turret__) */
