#include "Menu.h"
#include <iostream>
#include <string>

void Menu::PrintMenu() {
    std::cout << R"(
                                 |>>>
                                 |
                    |>>>      _|_      |>>>
                    |         /   \     |
                   _|_       /     \   _|_
                  /   \     /_______\ /   \
                 /     \   |  _   _  |     \
                /_______\  | | | | | |_______\
                |  _ _  |  | | | | | |  _ _  |
                | |   | |  | | | | | | |   | |
                | |___| |  | | | | | | |___| |
                |  ___  |  | | | | | |  ___  |
                | |   | |  | | | | | | |   | |
             ___|_|___|_|__|_|_|_|_|_|_|___|_|___
            /                                      \
           /________________________________________\
           |                                        |
           |     /\                         /\      |
           |    /  \       _______         /  \     |
           |   /    \     |       |       /    \    |
           |  |      |    |  ___  |      |      |   |
           |  |      |    | |   | |      |      |   |
           |  |      |    | |   | |      |      |   |
           |  |______|____|_|___|_|______|______|   |
           |                                        |
           |             __________                 |
           |            |          |                |
           |            |  CASTLE  |                |
           |            |          |                |
           |            |    __    |                |
           |            |   |  |   |                |
           |            |___|  |___|                |
           |________________________________________|

                          [1] PLAY
                          [2] QUITTER

               ~ CHOOSE YOUR DESTINY ~)" << std::endl;

    std::cin >> Choice;
    if (Choice == 1) {
        std::cout << "LA PARTIE COMMENCE \n";
        IsStarting = true;
    } else if (Choice == 2) {
        std::cout << "Aurevoir Connard \n";
        IsStarting = false;
    } else {
        std::cout << "T'as foire gars \n";
        IsStarting = false;
    }
}

