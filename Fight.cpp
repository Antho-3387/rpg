#include "Fight.h"
#include "Bot.h"
#include  "Player.h"
#include <iostream>
#include <thread>
#include <chrono>

void Fight::Fighting(Player& Player, Bot& Bot) {
    do {
        int PlayerD = Player.PlayerDamage;
        Bot.BotHp -= PlayerD;
        int BotD = Bot.BotDamage;
        Player.PlayerHp -= BotD;
        std::cout << "HP du joueur : " << Player.PlayerHp << "\n";
        std::cout << "HP du bot : " << Bot.BotHp << "\n";
        std::cout << " " << std::endl;

        std::this_thread::sleep_for(std::chrono::seconds(1));//Faire la boucle toutes les secondes

    } while (Player.PlayerHp > 0 && Bot.BotHp > 0);

    std::cout << "Voici le resultat ! " << std::endl;
    std::cout << "Hp du Joueur " << Player.PlayerHp << std::endl << "Hp du bot "<< Bot.BotHp << std::endl;

    if (Player.PlayerHp > Bot.BotHp) {
        std::cout << "Tu as gagne ! ";
    } else {
        std::cout << "Tu as perdu ! ";
    }
    std::cout << "Voici le resultat ! " << "Hp du joueur " << Player.PlayerHp << " Hp du bot "<< Bot.BotHp;
}