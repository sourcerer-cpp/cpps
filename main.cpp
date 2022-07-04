#include <iostream>
#include <string>

void print(const std::string & message) {
    std::cout << message << '\n';
}

void print(int number, const std::string & message) { // overloaded function
    std::cout << number << message << '\n';
}

void get_user_input(int & input) {
    std::cin >> input;
}

void get_user_input(char & input) { // overloaded function
    std::cin >> input;
}

int main() {
    int number = 0;
    char user_choice = 'y';

    while (user_choice == 'y') {
        print("Please enter an integer: ");
        get_user_input(number);

        if (number > 0) {
            print(number, " is a positive number.");
        }
        else if (number < 0) {
            print(number, " is a negative number.");
        }
        else {
            print(number, " is neither positive nor negative.");
        }

        print("Would you like to proceed? (y/n) ");
        get_user_input(user_choice);
    }
}

// Pay attention that you cannot use very big integers while
// you are using this code example, because of limitations of
// type int which we use here.
// You can learn more about integer types in Stephen Prata's
// book in Chapter 3 "Dealing with Data", page 68
