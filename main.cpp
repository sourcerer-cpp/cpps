#include <iostream>


int main()
{
    int kids = 4;
    std::cout << "Value of variable kids: " << kids << '\n';
    std::cout << "Address of variable kids: " << &kids << "\n\n";

    // declaration of variable ref_kids of type "reference to int":
    int & ref_kids // ref_kids is just another name for kids (i.e. alias of kids)
        = kids;

    std::cout << "Value of variable ref_kids: " << ref_kids << '\n';
    std::cout << "Address of variable ref_kids: " << &ref_kids << "\n\n";
}
