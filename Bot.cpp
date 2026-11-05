#include "Bot.h"
#include <iostream>

void Bot::SelectYourStatBot() {
    std::cout << "\n" << std::endl;
    std::cout << "Selectionne les stats du bot" << std::endl;
    std::cout << "Damage : \n";
    std::cin >> BotDamage;
    std::cout << "Hp : \n";
    std::cin >> BotHp;
    std::cout << "Affichage Stat du bot \n";
    std::cout << "Damage du bot : " << BotDamage << "\n";
    std::cout << "Hp du bot : " << BotHp << std::endl;
}
