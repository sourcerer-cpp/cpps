#include <iostream>


int main()
{
    int number = 0;
    char user_choice = 'y';

    while (user_choice == 'y') {
        std::cout << "Please enter an integer: ";
        std::cin >> number;

        if (number > 0) {
            std::cout << number << " is a positive number.\n";
        }
        else if (number < 0) {
            std::cout << number << " is a negative number.\n";
        }
        else {
            std::cout << "The number zero is neither positive nor negative.\n";
        }

        std::cout << "Would you like to proceed? (y/n) ";
        std::cin >> user_choice;
    }
}
