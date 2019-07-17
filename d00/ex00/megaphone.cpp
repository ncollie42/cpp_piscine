#include <iostream>

int main(int argc, char **argv)
{
    int n = 1;

    if (argc != 1)
        while (n < argc)
        {
            std::string tmp = argv[n++];
            for (unsigned long n = 0; n < tmp.length(); n++)
                std::cout << (char)toupper(tmp[n]);
        }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
}
