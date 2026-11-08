#ifndef RPGFIGHTING_WEAPON_H
#define RPGFIGHTING_WEAPON_H
#include <memory>
#include <vector>

class Player;

class Weapon {
public:
    std::vector<std::unique_ptr<Weapon>> Weapons;//Tableau vector pour stocker les armes
    int WeaponDamage;
    void WeaponInInventory(Player& player);
    virtual ~Weapon() = default;

};

class Sock : public Weapon {
public:
    Sock() {
        WeaponDamage = 1;
    }
};

class Sword : public Weapon {
public:
    Sword() {
        WeaponDamage = 15;
    }
};

class Punch : public Weapon {
public:
    Punch () {
        WeaponDamage = 9999;
    }
};


#endif //RPGFIGHTING_WEAPON_H
