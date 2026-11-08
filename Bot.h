#ifndef RPGFIGHTING_BOT_H
#define RPGFIGHTING_BOT_H

#include <string>

class Bot {
public:
    std::string BotName;
    int BotHp = 0;
    int BotDamage = 0;

    void SelectYourStatBot();
};


#endif //RPGFIGHTING_BOT_H
