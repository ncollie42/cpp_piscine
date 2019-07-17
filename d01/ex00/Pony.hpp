#ifndef PONY_H
#define PONY_H
#include <iostream>

class Pony
{
    public:
        Pony( void );
        ~Pony ( void );

        static Pony   *ponyOnTheHeap (void);
        static Pony    ponyOnTheStack (void);
};

#endif