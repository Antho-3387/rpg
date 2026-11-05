#ifndef RPGFIGHTING_PLAYER_H
#define RPGFIGHTING_PLAYER_H

#include "Race.h"

class Player {
public:
    int PlayerHp = 0;
    int PlayerDamage = 0;
    Race* SelectedRace = nullptr;

    void SelectYourStatPlayer();
};

#endif