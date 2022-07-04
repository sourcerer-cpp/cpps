// Example #11: unsigned int overflow, wrapping around

#include <iostream>
#include <limits>
#include <thread>
#include <chrono>

int main()
{
    unsigned int x; // unsigned int means that you can store in it only positive numbers and 0
    x = std::numeric_limits<unsigned int>::max() - 10;

    std::cout <<
        "This is what happens when unsigned int overflows on your pc. Unsigned int overflow is not UB.\n"
        "When it overflows, it wraps around, just like miles on your speedometer when it comes to maximal value.\n\n"
        "To stop it just press Ctrl + C\n\n";

    while (true) {
        std::cout << x++ << '\n'; // signed int overflow is UB (undefined behavior)
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); // to add little pause after each loop step
    }
}
