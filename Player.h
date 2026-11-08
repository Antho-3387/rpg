#ifndef RPGFIGHTING_PLAYER_H
#define RPGFIGHTING_PLAYER_H
#include "Inventory.h"
#include "Race.h"
#include <string>

class Player {
public:
    std::string PlayerName;
    int PlayerHp = 0;
    Race* SelectedRace = nullptr;
    Inventory* UseInventory;
    Weapon* EquippedWeapon = nullptr;

    void SelectYourStatPlayer();
};

#endif