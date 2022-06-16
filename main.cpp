#include "includes/helper_functions.h"


int main()
{
    using utils::display_sequenced_numbers;
    display_sequenced_numbers(0, 4, "<=");
    display_sequenced_numbers(5, 1, ">=");
    display_sequenced_numbers(1, 5, "<");
    display_sequenced_numbers(34, 23, ">");
}

