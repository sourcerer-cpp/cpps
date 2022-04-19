#ifndef EX13_H
#define EX13_H

// Задача 13
// Создать структуру Warrior с полями сила, ловкость, жизнь, урон, защита.
// Вывести эти данные на экран.

namespace ex13
{
    struct Warrior
    {
        double strength = 5.3;
        double dexterity = 7.2;
        double life = 10.4;
        double damage = 2.5;
        double defense = 3.3;
    };

    void display_warriors_stats(const Warrior & warrior);
}


#endif // EX13_H
