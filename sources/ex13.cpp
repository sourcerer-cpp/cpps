#include <iostream>

#include "includes/ex13.h"

// Задача 13
// Создать структуру Warrior с полями сила, ловкость, жизнь, урон, защита.
// Вывести эти данные на экран.

namespace ex13
{
    void display_warriors_stats(const Warrior & warrior)
    {
        std::cout <<
            "strength: " << warrior.strength << '\n' <<
            "dexterity: " << warrior.dexterity << '\n' <<
            "life: " << warrior.life << '\n' <<
            "damage: " << warrior.damage << '\n' <<
            "defense: " << warrior.defense << "\n\n";

        // small addition to test git features
    }
}
