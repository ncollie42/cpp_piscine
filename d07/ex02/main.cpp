#include "Array.hpp"
#include <string>
#include <iostream>
#include <iomanip>

int main(void)
{
    std::cout << std::setprecision(1) << std::fixed;
    Array<int> tmp0(8);
    Array<int> tmp1;
    Array<float> tmp2(4);
    Array<char> tmp3(10);

    Array<int> myArray = tmp0;
    Array<std::string> tmp5(10);
    tmp5[2] = "This";
    try
    {
        std::cout << tmp0[4] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << tmp1[4] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    tmp1 = tmp0;
    try
    {
        std::cout << tmp1[4] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << tmp2[2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    for (unsigned int n = 0; n < 10; n++)
    {
        tmp3[n] = 42;
    }
    try
    {
        std::cout << tmp3[3] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << tmp5[0] << std::endl;
        std::cout << tmp5[2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
}