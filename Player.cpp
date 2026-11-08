#include "Player.h"
#include <iostream>
#include <memory>

void Player::SelectYourStatPlayer() {

    int choice;

    std::cout << "Quel est le nom de ton personnage ? ";
    std::getline(std::cin >> std::ws, PlayerName);

    std::cout << "\n+--------------------------------+\n";
    std::cout << "|          CHOISIS TA RACE       |\n";
    std::cout << "+--------------------------------+\n";

    std::cout << "| 1) Humain 👱🏻                 |\n";
    std::cout << "|    PV : 24  | Dégâts : 15        |\n";
    std::cout << "+--------------------------------+\n";

    std::cout << "| 2) Elf 🧝🏼                    |\n";
    std::cout << "|    PV : 34  | Dégâts : 11        |\n";
    std::cout << "+--------------------------------+\n";

    std::cout << "| 3) Saitama 🦸🏻️                |\n";
    std::cout << "|    PV : 999 | Dégâts : 999     |\n";
    std::cout << "+--------------------------------+\n";
    std::cout << "Ton choix : ";

    std::cin >> choice;

    switch (choice) {
        case 1:
            SelectedRace = new Human();
            break;

        case 2 :
            SelectedRace = new Elf();
            break;

        case 3 :
            SelectedRace = new Saitama();
            break;
        default:
            std::cout << "Choix invalide !" << std::endl;
            return;
    }

    PlayerHp = SelectedRace->CharacterHp;

    std::cout << "\n+--------------------------------+\n";
    std::cout << "|          STATS DU JOUEUR       |\n";
    std::cout << "+--------------------------------+\n";
    std::cout << "| Nom    : " << PlayerName << "\n";
    std::cout << "| Dégâts : " << SelectedRace->CharacterDamage << "\n";
    std::cout << "| PV     : " << PlayerHp << "\n";
    std::cout << "+--------------------------------+\n";
}