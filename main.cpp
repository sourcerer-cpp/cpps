// Here you can find more info about built-in types and its range:
// https://en.cppreference.com/w/cpp/language/types

#include <iostream>
#include <limits>

int main()
{
    const int BITS_IN_BYTE = 8;
    const int SIZE_OF_INT_IN_BYTES = sizeof(int);
    const int SIZE_OF_INT_IN_BITS = SIZE_OF_INT_IN_BYTES * BITS_IN_BYTE;

    std::cout
        << "Size of type int on this machine: "
        << SIZE_OF_INT_IN_BYTES << " bytes ("
        << SIZE_OF_INT_IN_BITS << " bits)."
        << "\nMin. possible value of int on this machine: " << std::numeric_limits<int>::min()
        << "\nMax. possible value of int on this machine: " << std::numeric_limits<int>::max()
        << "\n\n";
}
