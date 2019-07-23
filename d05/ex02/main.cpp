#include "Bureaucrat.hpp"
#include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
int main(void)
{
    srand(time(0));
    try
    {
        Bureaucrat      person(2, "tcho");
        Bureaucrat      person2(60, "qpeng");
        // Form            *test1 = new ShrubberyCreationForm("home");
        // Form            *test2 = new RobotomyRequestForm("mars");
        Form            *test3 = new PresidentialPardonForm("nico");
        // test1->beSigned(person);
        // test2->beSigned(person);
        test3->beSigned(person);
        
        // test1.signForm(A);
        
        // test1->execute(person);
        // test2->execute(person);
        // test3->execute(person2);
        person.executeForm(*test3);
        std::cout << *test3 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}