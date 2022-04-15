#ifndef EXERCISES_H
#define EXERCISES_H

#include "helper_functions.h"
#include "ex1.h"
#include "ex2.h"
#include "ex3.h"
#include "ex4.h"
#include "ex5.h"
#include "ex6.h"
#include "ex7.h"
#include "ex10.h"


void choose_exercise()
{
    int exercise_number =
        utils::get_int_from_user("Enter an exercise number (to quit type 0): ");

    if (exercise_number == 0)
    {
        return;
    }
    else if (exercise_number == 1)
    {
        ex1::add_two_integers();
    }
    else if (exercise_number == 2)
    {
        ex2::dollars_to_rupees(100.0);
    }
    else if (exercise_number == 3)
    {
        ex3::show_name_and_age();
    }
    else if (exercise_number == 4)
    {
        ex4::square();
    }
    else if (exercise_number == 5)
    {
        ex5::fahrenheit_to_celcius();
    }
    else if (exercise_number == 6)
    {
        utils::show_result("234 + 456 = ", ex6::add_two_integers(234, 456));
    }
    else if (exercise_number == 7)
    {
        utils::show_result("(2.2 + 3.3) = ", ex7::add_two_numbers(2.2, 3.3));
    }
    else if (exercise_number == 10)
    {
        bool result = ex10::is_even(8);
        utils::show_result("is_even(8) = ", result);
    }
    else
    {
        utils::show_error_message("Wrong exercise number!\n\n");
    }

    choose_exercise();
}

#endif // EXERCISES_H
