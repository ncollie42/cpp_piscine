#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat      test1(2, "tcho");
        Form            A("special", 50, 50);
        A.beSigned(test1);
        // test1.signForm(A);
        std::cout << A << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}