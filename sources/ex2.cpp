#include <iostream>

#include "includes/ex2.h"
// Задача #2.
// Известно, что курс доллара к рупии 1 : 76.22
// Создайте переменную money_amount_in_dollars типа double, затем ещё одну
// переменную money_amount_in_rupees типа double. Выполните необходимые
// вычисления, чтобы перевести 17 долларов в рупии.
// Результат вычислений сохраните в переменную total_amount_in_rupees
// типа double.


namespace ex2
{
    void dollars_to_rupees(double money_amount_in_dollars)
    {
        const double exchange_rate = 76.22;
        double total_amount_in_rupees = money_amount_in_dollars * exchange_rate;
        std::cout << "total_amount_in_rupees: " << total_amount_in_rupees << "\n\n";
    }
}
