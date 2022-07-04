#include <iostream>


int main()
{
    std::cout << "Please enter an integer: ";
    int number;
    std::cin >> number; // We use std::cin to get user input

    std::cout << "You just entered " << number << '\n';
    if (number > 0)
    {
        std::cout << number << " is a positive number.\n";
    }
    else if (number < 0)
    {
        std::cout << number << " is a negative number.\n";
    }
    else
    {
        std::cout << "The number zero is neither positive nor negative.\n";
    }
}
