#ifndef CONTACTS_H
#define CONTACTS_H
#include <iostream>

struct contact
{
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string login;
    std::string postal;
    std::string address;
    std::string email;
    std::string phone;
    std::string birthday;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;
    void ask_for_data(void);
    void easy_print(void);
    void full_print(void);
};



#endif 