#include "Weapon.h"
#include "Inventory.h"
#include "Player.h"

void Weapon::WeaponInInventory(Player& Player) {
    for (const auto& weapon : Weapons) {
        if (!Weapons.empty()) {
            Player.EquippedWeapon = Weapons[0].get();
        }
    }
}
