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
    std::cout << "Enter your login\n";
    getline(std::cin, tmp);
    this->login = tmp;
    std::cout << "Enter your address\n";
    getline(std::cin, tmp);
    this->address = tmp;
    std::cout << "Enter your email\n";
    getline(std::cin, tmp);
    this->email = tmp;
    std::cout << "Enter your phone number\n";
    getline(std::cin, tmp);
    this->phone = tmp;
    std::cout << "Enter your birthday\n";
    getline(std::cin, tmp);
    this->birthday = tmp;
    std::cout << "Enter your favorite meal\n";
    getline(std::cin, tmp);
    this->favorite_meal = tmp;
    std::cout << "Enter your underwear color\n";
    getline(std::cin, tmp);
    this->underwear_color = tmp;
    std::cout << "Enter your Darkest secret\n";
    getline(std::cin, tmp);
    this->darkest_secret = tmp;

}
std::string truncate(std::string str)
{
    if (str.length() <= 0)
        return str;
    std::string new_str = str.substr(0, 10);
    
    new_str[9] = '.';
    return new_str;
}

void contact::easy_print( void )
{
    std::cout.width(10);
    std::cout << truncate(this->first_name);
    std::cout << " | ";
    std::cout.width(10);
    std::cout << truncate(this->last_name);
    std::cout << " | ";
    std::cout.width(10);
    std::cout << truncate(this->nick_name);
    std::cout << " | " << std::endl;
}

void contact::full_print( void )
{
    std::cout << "*Contact info*\n";
    std::cout << "--------------------------------\n";
    std::cout << "Name: " << this->first_name << " " << this->last_name << std::endl;
    std::cout << "Nickname: " << this->nick_name << "\n";
    std::cout << "Login: " << this->login << "\n";
    std::cout << "Address: " << this->address << "\n";
    std::cout << "Phone number: " << this->phone << "\n";
    std::cout << "Birthday: " << this->birthday << "\n";
    std::cout << "Favorite meal: " << this->favorite_meal << "\n";
    std::cout << "Underwear color" << this->underwear_color<< "\n";
    std::cout << "Darkest secret" << this->darkest_secret << "\n";
}


