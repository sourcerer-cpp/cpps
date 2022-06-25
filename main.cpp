#include <iostream>
#include <string>


int main()
{
    int a = 5;
    int b = 2;
    int result = a + b;
    std::cout << "a = " << a;
    std::cout << "\nb = " << b;
    std::cout << "\na + b = " << result << "\n";
    int diff = a - b;
    std::cout << "a - b = " << diff << '\n';
    int product = a * b;
    int quotient = a / b;
}

