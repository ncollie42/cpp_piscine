#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat      test1(1, "bob");
        Bureaucrat      test2(150, "bill");
        // test1.upGrade();
        // test2.downGrade();
        std::cout << test1 << "\n" << test2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}