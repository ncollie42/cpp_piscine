#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "contancts.hpp"

class phonebook {
    public:
        contact list[8];
        phonebook( void );
        ~phonebook( void );
        void add();
        void search();
    private:
        int total;

};

#endif