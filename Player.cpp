#include "Player.h"
#include <iostream>
#include <memory>

void Player::SelectYourStatPlayer() {

    int choice;

    std::cout << "Choisie ta race ! " << std::endl;

    std::cout << " 1) Humain 👱🏻" << std::endl;
    std::cout << " 4 Hp" << std::endl;
    std::cout << " 5 Damage" << std::endl;
    std::cout << " " << std::endl;

    std::cout << " 2) Elf 🧝🏼" << std::endl;
    std::cout << " 4 Hp" << std::endl;
    std::cout << " 1 Damage" << std::endl;
    std::cout << " " << std::endl;

    std::cout << " 3) Saitama 🦸🏻️" << std::endl;
    std::cout << " 999 Hp️" << std::endl;
    std::cout << " 999 Damage" << std::endl;
    std::cout << " " << std::endl;

    std::cin >> choice;

    Race* SelectedRace = nullptr;

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
    PlayerDamage = SelectedRace->CharacterDamage;

    std::cout << "\n--- Stats du joueur ---\n";
    std::cout << "Damage : " << PlayerDamage << "\n";
    std::cout << "Hp : " << PlayerHp << std::endl;

    delete SelectedRace;
    SelectedRace = nullptr;
}