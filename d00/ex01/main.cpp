#include "phonebook.hpp"

void prompt(void)
{
    std::cout << "***************************\n"
    << "PHONEBOOK\n"
    << "Commands:\n"
    << "\t  ADD\n"
    << "\t  SEARCH\n"
    << "\t  EXIT\n"
    << "***************************\n" << std::endl;
}

int main()
{
    phonebook phonebook;

    prompt();
    while(true)
    {
        std::string command;
        std::cout << ">> ";
        getline(std::cin, command);
        if (!command.compare("ADD"))
            phonebook.add();
        else if (!command.compare("SEARCH"))
            phonebook.search();
        else if (!command.compare("EXIT"))
            exit(EXIT_SUCCESS);
        else
            std::cout << "invalid command! =c" << std::endl;
    }
}