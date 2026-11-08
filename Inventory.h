#ifndef RPGFIGHTING_INVENTORY_H
#define RPGFIGHTING_INVENTORY_H
#include <vector>
#include "Weapon.h"
#include <memory>

class Inventory {
public:
    int size;
    Weapon* UseWeapon;
    Inventory();
    std::vector<std::unique_ptr<Weapon>> Weapons;
};

#endif //RPGFIGHTING_INVENTORY_H
