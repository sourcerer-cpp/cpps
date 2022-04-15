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

    void show_error_message(const std::string & error_message)
    {
        std::cout << error_message;
    }
}
