#include <iostream>
#include "Player.h"
#include "Bot.h"
#include "Fight.h"
#include "Menu.h"
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

    Bot Bot1;
    Bot1.SelectYourStatBot();

    Fight Fight1;
    Fight1.Fighting(Player1, Bot1);

    return 0;
}