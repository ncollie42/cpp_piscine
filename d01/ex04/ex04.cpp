#include <iostream>

void ptr_func(std::string *ptr)
{
    std::cout << *ptr << std::endl;
}

void ref_func(std::string &ptr)
{
   std::cout << ptr << std::endl;
}


int main()
{
    std::string tmp = "HI THIS IS BRAIN";
    std::string *ptr = &tmp;
    std::string &ref = tmp;
    ptr_func(ptr);
    ref_func(ref);
}