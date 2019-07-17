#include "Pony.hpp"

Pony::Pony( void )
{
    std::cout << "Pony is born" << std::endl;
}

Pony::~Pony( void )
{
    std::cout << "Dead Pony" << std::endl;
}

Pony    *Pony::ponyOnTheHeap (void)
{
    return new Pony;
}

Pony   Pony::ponyOnTheStack( void )
{
    Pony tmp;
    return tmp;
}