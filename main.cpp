#include <iostream>
#include "Player.h"
#include "Bot.h"
#include "Fight.h"
#include "Menu.h"
#include "Inventory.h"
#include <array>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {

    Menu Menu1;
    Menu1.PrintMenu();
    if (Menu1.IsStarting == false) {
        return 0;
    }

    Player Player1;
    Player1.SelectYourStatPlayer();

    std::array<Bot, 4> bots = {{
        {"Bot 1", 20, 15},
        {"Bot 2", 30, 25},
        {"Bot 3", 140, 135},
        {"Bot 4", 200, 180}
    }};

    Inventory inventory;
    if (dynamic_cast<Elf*>(Player1.SelectedRace) != nullptr) {
        Player1.EquippedWeapon = inventory.Weapons[0].get();
    } else if (dynamic_cast<Human*>(Player1.SelectedRace) != nullptr) {
        Player1.EquippedWeapon = inventory.Weapons[1].get();
    } else {
        Player1.EquippedWeapon = inventory.Weapons[0].get();
    }
    std::cout << "Arme attribuée : "
              << (dynamic_cast<Sword*>(Player1.EquippedWeapon) != nullptr ? "Sword" : "Sock")
              << " (" << Player1.EquippedWeapon->WeaponDamage << " dégâts)\n";
    Fight fight;
    for (std::size_t i = 0; i < bots.size(); ++i) {
        Bot& bot = bots[i];
        std::cout << "\nUn nouvel adversaire arrive : " << bot.BotName << " !\n";
        std::cout << "PV : " << bot.BotHp << " | Dégâts : " << bot.BotDamage << "\n";
        fight.Fighting(Player1, bot);
        if (Player1.PlayerHp <= 0) {
            break;
        }

        if (i + 1 < bots.size()) {
            std::cout << "\n+--------------------------------+\n";
            std::cout << "|        TES STATS ACTUELLES     |\n";
            std::cout << "+--------------------------------+\n";
            std::cout << "| Joueur : " << Player1.PlayerName << "\n";
            std::cout << "| PV     : " << Player1.PlayerHp << "\n";
            std::cout << "| Dégâts de race : " << Player1.SelectedRace->CharacterDamage << "\n";
            std::cout << "| Dégâts d'arme : " << Player1.EquippedWeapon->WeaponDamage << "\n";
            std::cout << "+--------------------------------+\n";
            std::cout << "Veux-tu continuer vers " << bots[i + 1].BotName << " ? (o/n) : ";

            char choice;
            std::cin >> choice;
            if (choice != 'o' && choice != 'O') {
                std::cout << "Tu as choisi d'arrêter les combats.\n";
                break;
            }
        }
    }

    return 0;
}