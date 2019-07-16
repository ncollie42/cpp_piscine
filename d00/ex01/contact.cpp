#include "contancts.hpp"
#include <cstdio>

void    contact::ask_for_data(void)
{
    std::string tmp;
    std::cout << "Making a new contact...\n"
    << "Enter your first name\n";
    getline(std::cin, tmp);
    this->first_name = tmp;
    std::cout << "Enter your last name\n";
    getline(std::cin, tmp);
    this->last_name = tmp;
    std::cout << "Enter your nickname\n";
    getline(std::cin, tmp);
    this->nick_name = tmp;

}


void contact::easy_print( void )
{
    std::cout << this->first_name << "\t"
    << this->last_name << "\t"
    << this->nick_name << std::endl;
}

void contact::full_print( void )
{
    std::cout << this->first_name << "\t"
    << this->last_name << "\t"
    << this->nick_name << std::endl;
    fflush(stdin);
}


