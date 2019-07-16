#include "phonebook.hpp"
#include <stdio.h>

phonebook::phonebook( void )
{
    _total = -1;
}

void phonebook::add()
{
    if (_total < 7)
    {
        _total++;
        _list[_total].ask_for_data();
        std::cout << "current tottal " << _total << std::endl;
    }
    else
        std::cout << "Sorry phonebook is full" << std::endl;
}
void search_prompt(void)
{
    std::cout.width(10);
    std::cout << "Index";
    std::cout << " | ";
    std::cout.width(10);
    std::cout << "firstName";
    std::cout << " | ";
    std::cout.width(10);
    std::cout << "lastName";
    std::cout << " | ";
    std::cout.width(10);
    std::cout << "Nickname";
    std::cout << " |\n\n";
}
void phonebook::search()
{
    int index;
    std::string tmp;
    if (_total < 0)
    {
        std::cout << "No contacts in the phonebook" << std::endl;
        return;
    }
    
    search_prompt();
    for (int n = 0; n <= _total; n++)
    {
        std::cout.width(10);
        std::cout << n;
        std::cout << " | ";
        _list[n].easy_print();
    }
    std::cout << "Enter index of person you would like to see\n:: ";
    while (true)
    {
        getline(std::cin, tmp);
        try {
            index = (int)std::stoi(tmp);
        }
        catch (...)
        {
            index = -1;
        }
        if (index >= 0 && index <= _total)
        {
            _list[index].full_print();
            return ;
        }
        else
            std::cout << "invalid index, Try again\n:: ";
    }
}