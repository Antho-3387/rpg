#ifndef RPGFIGHTING_FIGHT_H
#define RPGFIGHTING_FIGHT_H
#include "Player.h"
#include "Bot.h"


class Fight {
public:
    int DamageTotal;
    void Fighting(Player& Player, Bot& Bot);
};


#endif //RPGFIGHTING_FIGHT_H
