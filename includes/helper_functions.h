#ifndef HELPER_FUNCTIONS_H
#define HELPER_FUNCTIONS_H

#include <string>

namespace utils
{
    int get_int_from_user(const std::string & message_to_user);
    void show_result(const std::string & message_to_user, int result);
    void show_result(const std::string & message_to_user, double result);
    void show_result(const std::string & message_to_user, bool result);
    void show_error_message(const std::string & error_message);
    void display_sequenced_numbers(int starting_value, int count, const std::string & op);
    void display_sequenced_numbers(int starting_value, int count);
}

namespace math
{
    int square(int);
    int cube(int);
    int add(int, int);
    int diff(int, int);
    int divide(int, int);
    int multiply(int, int);
}

#endif // HELPER_FUNCTIONS_H
