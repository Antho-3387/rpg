#include "Bot.h"
#include <iostream>

void Bot::SelectYourStatBot() {
    std::cout << "\n+--------------------------------+\n";
    std::cout << "|        CONFIGURATION DU BOT    |\n";
    std::cout << "+--------------------------------+\n";
    std::cout << "Entre les dégâts du bot : ";
    std::cin >> BotDamage;
    std::cout << "Entre ses points de vie : ";
    std::cin >> BotHp;
    std::cout << "\n+--------------------------------+\n";
    std::cout << "|           STATS DU BOT         |\n";
    std::cout << "+--------------------------------+\n";
    std::cout << "| Dégâts : " << BotDamage << "\n";
    std::cout << "| PV     : " << BotHp << "\n";
    std::cout << "+--------------------------------+\n";
}
