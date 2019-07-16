#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "contancts.hpp"

class phonebook {
    public:
        phonebook( void );
        void add();
        void search();
    private:
        contact _list[8];
        int     _total;
};

#endif