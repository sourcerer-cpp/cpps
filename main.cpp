#include <iostream>


int main() {
    std::cout << "Please enter an integer: "; // output message to console
    int number = 0; // declare integer and initialize it to 0
    std::cin >> number; // get integer from user
    std::cout << "Current value of your number: " << number << '\n';

    char user_choice = 'y'; // declare variable of type char
    while (user_choice == 'y') { // compare user_choice with character y
        std::cout << "Would you like to increase your number? (y/n) ";
        std::cin >> user_choice; // get character from user

        if (user_choice == 'y') { // compare user_choice with character y
            ++number; // increase (increment) number by 1
        }
        std::cout << "Current value of your number: " << number << '\n';
        std::cout << "Would you like to proceed? (y/n) ";
        std::cin >> user_choice; // get character from user
    }
}
