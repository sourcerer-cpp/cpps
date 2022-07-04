// Example #10: signed int overflow, UB

#include <iostream>
#include <limits>
#include <thread>
#include <chrono>

int main()
{
    int x = std::numeric_limits<int>::max() - 20;

    std::cout <<
        "This is what happend when signed int overflows on your machine in your operation system\n"
        "when code compiled by this particalur compiler with this particular version of Standard Library\n"
        "with this particular C++ standard when the Moon in this particular phase...\n"
        "...so, you've got the point, right? It's called \"Undefined Behavior\" (or just UB).\n\n"
        "To stop it just press Ctrl + C\n\n";

    while (true) {
        std::cout << x++ << '\n'; // signed int overflow is UB (undefined behavior)
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); // to add little pause after each loop step
    }
}
