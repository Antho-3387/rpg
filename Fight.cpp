#include "Fight.h"
#include "Bot.h"
#include  "Player.h"
#include <iostream>
#include <thread>
#include <chrono>

void Fight::Fighting(Player& Player, Bot& Bot) {
    if (Player.SelectedRace == nullptr) return;

    //vérification
    if (Player.EquippedWeapon == nullptr)
    {
        std::cout << "Aucune arme equipee !" << std::endl;
        return;
    }

    do {

        int TotalDamage = Player.SelectedRace->CharacterDamage + Player.EquippedWeapon->WeaponDamage;



        //int PlayerD = Player.PlayerDamage;
        Bot.BotHp -= TotalDamage;
        int BotD = Bot.BotDamage;
        Player.PlayerHp -= BotD;
        std::cout << "\n+--------------------------------+\n";
        std::cout << "| " << Bot.BotName << " - TOUR DE COMBAT\n";
        std::cout << "+--------------------------------+\n";
        std::cout << "| PV de " << Player.PlayerName << " : " << Player.PlayerHp << "\n";
        std::cout << "| PV de " << Bot.BotName << " : " << Bot.BotHp << "\n";
        std::cout << "+--------------------------------+\n";
        std::cout << "| Dégâts de race : " << Player.SelectedRace->CharacterDamage << "\n";
        std::cout << "| Dégâts d'arme : " << Player.EquippedWeapon->WeaponDamage << "\n";
        std::cout << "| Dégâts totaux : " << TotalDamage << "\n";
        std::cout << "| Infligés au bot : " << TotalDamage << "\n";
        std::cout << "| Infligés par le bot : " << BotD << "\n";
        std::cout << "+--------------------------------+\n" << std::flush;//Cela signifie qu'il n'écrit pas les caractères immédiatement, mais seulement lorsque le tampon est plein

        std::this_thread::sleep_for(std::chrono::seconds(1));//Faire la boucle toutes les secondes

    } while (Player.PlayerHp > 0 && Bot.BotHp > 0);


    std::cout << "\n+================================+\n";
    std::cout << "| FIN DU COMBAT : " << Bot.BotName << "\n";
    std::cout << "+================================+\n";
    std::cout << "| PV de " << Player.PlayerName << " : " << Player.PlayerHp << std::endl;
    std::cout << "| PV de " << Bot.BotName << " : " << Bot.BotHp << std::endl;
    std::cout << "+--------------------------------+\n";

    if (Player.PlayerHp > 0) {
        std::cout << "|       VICTOIRE ! Bien joué !   |\n";
    } else {
        std::cout << "|          DÉFAITE...            |\n";
    }
    std::cout << "+================================+\n";
}