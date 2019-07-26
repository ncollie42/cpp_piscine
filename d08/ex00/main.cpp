#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(int argc, char **argv)
{
    int num = 5;
    if (argc != 1)
    {
        try
        {
            num = std::stoi(argv[1]);
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << " --- using default num (5)" << std::endl;
        }
    }
	std::vector<int> v1;

	for (int n = 0; n <= 50; ++n) {
		v1.push_back(n);
	}
    bool found = easyfind(v1, num);
    std::cout << "The number ("<<num<<") was " << ((found) ? "" : "not " )
     << "found" << std::endl;
}
