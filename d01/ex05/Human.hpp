#ifndef HUMAN_H
#define HUMAN_H
#include "Brain.hpp"

class Human
{
    public:
        const Brain &getBrain(void);
        std::string identify(void) const;
    private:
        const Brain _myBrain;
};

#endif
