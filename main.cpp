#include <iostream>


int main()
{
    int kids = 4;
    std::cout << "Value of variable kids: " << kids << '\n';
    std::cout << "Address of variable kids: " << &kids << "\n\n";

    int * pkids // pointer to kids (declaration of variable "pointer to int")
        = &kids;// address of variable kids (we use & symbol to represent address)

    std::cout << "Value of variable pkids: " << pkids << '\n'; // pointer name is always an address of something else
    std::cout << "Address of variable pkids: " << &pkids << "\n\n";

    std::cout << "Value of variable pkids points to (i.e. value of kids): " << *pkids << '\n'; // dereferencing a pointer
    std::cout << "Address of variable pkids points to (i.e. address of kids): " << &(*pkids) << '\n';
}

