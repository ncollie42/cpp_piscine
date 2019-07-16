#include "phonebook.hpp"
#include <stdio.h>

phonebook::phonebook( void )
{
    total = 0;
}

phonebook::~phonebook( void )
{
}

void phonebook::add()
{
    if (total < 8)
    {
        list[total].ask_for_data();
        total++;
    }
}

void phonebook::search()
{
    int index;

    std::cout << "Index\tfirstName\tlastName\tNickname\n\n";
    for (int n = 0; n < total; n++)
    {
        std::cout << n << "\t";
        list[n].easy_print();
    }

    std::cout << "Enter index of person you would like to see" << std::endl;
    std::cin >> index;

    if (index >= 0 && index <= total)
        list[index].full_print();
    else
        std::cout << "invalid index\n";
}