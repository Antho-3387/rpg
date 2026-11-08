#include "Inventory.h"
#include "Weapon.h"

Inventory::Inventory() {
    Weapons.push_back(std::make_unique<Sock>());
    Weapons.push_back(std::make_unique<Sword>());
    //Weapons.push_back(std::make_unique<Punch>());
}