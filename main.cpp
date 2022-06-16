#include "includes/helper_functions.h"
#include <iostream>


int main()
{
    using utils::display_sequenced_numbers;
    display_sequenced_numbers(1, 7);
    display_sequenced_numbers(3, 9);
    display_sequenced_numbers(-5, 5);

    display_sequenced_numbers(23, 13);
    display_sequenced_numbers(3, -3);
    display_sequenced_numbers(8, 8);
}

