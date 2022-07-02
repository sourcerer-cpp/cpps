#include <iostream>


int main()
{
    // Usually variable has a type (here the type is "int"):
    [[maybe_unused]] int x;

    // Usually variable has a name (here the name is "is_positive"):
    [[maybe_unused]] bool is_positive;

    // Usually variable stores some value (here the value is 3.5):
    double apples = 3.5;

    // We can obtain address of variable using ampersand symbol:
    std::cout << "\nAddress of variable apples: " << &apples << "\n\n";
}

//variable is just a named region of memory
