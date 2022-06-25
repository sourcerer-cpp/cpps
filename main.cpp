#include <iostream>
#include <string>


int main()
{
    std::string greeting = "hello Kishori!\n\n";
    std::cout << greeting;

    int x = 42;

    std::cout << x << "\n\n";

    [[maybe_unused]] float pi = 3.14;
    std::cout << pi  << "\n\n";

    double my_very_awesome_variable = 2.5;
    std::cout << my_very_awesome_variable << "\n\n";

    char symbol = '@';
    std::cout << symbol << "\n\n";

    bool flag = false;
    std::cout << flag << "\n\n";
}

