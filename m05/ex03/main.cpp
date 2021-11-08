#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Intern i0;

    i0.makeForm("robotomy request", "robotomy request");
    i0.makeForm("robotomy request", "robotOMYrequest");
    i0.makeForm("robotomy request", "robotomity reqest");
    i0.makeForm("robotomy request", "robotomity pardon");
    i0.makeForm("robotomy request", "robotomity");
    i0.makeForm("robotomy request", "pardon");
    i0.makeForm("robotomy request", "request");
}
