#include "Pony.hpp"

int main(void)
{
    Pony stackpony = Pony::ponyOnTheStack();
    Pony *heappony = Pony::ponyOnTheHeap();
    Pony *LeakPony = Pony::ponyOnTheHeap();

    std::cout << "deleting a pony that's on the heap" << std::endl;
    delete heappony;
    std::cout << "stack pony will die after this function is over" << std::endl;
    std::cout << "leakPony is leaking and wont be killed" << std::endl;
}