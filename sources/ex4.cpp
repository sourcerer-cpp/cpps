#include <iostream>

#include "includes/ex4.h"

// Задача #4.
// Создайте функцию square() для возведения числа в квадрат. Функция должна
// принимать на вход один параметр типа double и возвращать также тип double.
// Вызовите вашу функцию, передав ей в качестве аргумента число 8.
// Сохраните результат в переменную result типа double.
// Выведите результат на экран.

namespace ex4
{
    double square(double x)
    {
        double res = x * x;

        return res;
    }
}
