#include <iostream>
#include "converter.hpp"
#include <iomanip>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Need one argument" << std::endl;
        exit(EXIT_FAILURE);
    }
    converter conv(argv[1]);
    std::cout << std::setprecision(1) << std::fixed;

    char a;
    try{
        a = conv;
        std::cout << "char: ";
        if (isprint(a))
            std::cout << a;
        else
            std::cout << "Non displayable";
        std::cout << std::endl;;
    } catch (const std::exception& e) {
        std::cout << "char: impossible" << std::endl;;
    }
    int b;
    try{
        b = conv;

        std::cout << "int: " << b << std::endl;;
    } catch (const std::exception& e) {
        std::cout << "int: impossible" << std::endl;;
    }

    float c;
    try {
        c = conv;
        std::cout << "float: " << c << "f" << std::endl;;
    } catch (const std::exception & e) {
        std::cout << "float: impossible" << std::endl;;
    }
    double d;
    try {
        d = conv;
        std::cout << "double: " << c << std::endl;;
    } catch (const std::exception & e) {
        std::cout << "double: impossible" << std::endl;;
    }
}