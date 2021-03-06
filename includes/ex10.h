#ifndef EX10_H
#define EX10_H

//Задача #10.
//Используя операцию вычисления остатка % при целочисленном делении реализуйте функцию, которая
//определяет, является ли число, переданное в функцию в качестве аргумента, чётным.

//Прототип функции должен выглядеть следующим образом:
//bool is_even(int number);

//Подсказка #1: тип bool - логический тип.
//Переменная типа bool может принимать одно из двух значений - либо true (истина), либо false (ложь).

//Подсказка #2: сравнить два логических выражения (или просто две переменных)
//можно с помощью операции сравнения == (равно). Например, вот такая инструкция выведет на экран значение false:
//std::cout << std::boolalpha << (2 * 2 == 5);
//А вот такая выведет true:
//std::cout << std::boolalpha << (2 * 2 == 4);

namespace ex10
{
    bool is_even(int number);
}

#endif // EX10_H
