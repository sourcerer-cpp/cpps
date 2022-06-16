#include <iostream>
#include "includes/helper_functions.h"


namespace utils
{
    int get_int_from_user(const std::string & message_to_user)
    {
        std::cout << message_to_user;
        int number = 0;
        std::cin >> number;
        return number;
    }

    void show_result(const std::string & message_to_user, int result)
    {
        std::cout << message_to_user << result << "\n\n";
    }

    void show_result(const std::string & message_to_user, bool result)
    {
        std::cout << message_to_user << std::boolalpha << result << "\n\n";
    }

    void show_result(const std::string & message_to_user, double result)
    {
        std::cout << message_to_user << result << "\n\n";
    }

    void show_error_message(const std::string & error_message)
    {
        std::cout << error_message;
    }

    void display_sequenced_numbers(int starting_value, int count, const std::string & op)
    {

    }

    void display_sequenced_numbers(int starting_value, int count)
    {
        if (starting_value < count)
        {
            while (starting_value <= count)
            {
                std::cout << starting_value << ' ';
                ++starting_value;
            }

            std::cout << "\n=======================\n";
        }
        else if (starting_value > count)
        {
            while (starting_value >= count)
            {
                std::cout << starting_value << ' ';
                --starting_value;
            }

            std::cout << "\n=======================\n";
        }
        else
        {
            std::cout << "invalid arguments: equal arguments are not allowed.\n\n";
        }
    }
}

namespace math
{
    int square(int num)
    {
        return num * num;
    }
  
    int cube(int num)
    {
        return square(num) * num;
    }
  
    int add(int x, int y)
    {
        return x+y;
    }

    int diff(int x, int y)
    {
        return x-y;
    }

    int divide(int x, int y)
    {
        return x/y;
    }

    int multiply(int x, int y)
    {
        return x*y;
    }
}
