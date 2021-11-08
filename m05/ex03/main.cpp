#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat simon("Simon", 1);
    Intern someRandomIntern;

    Form *form = someRandomIntern.makeForm("robotomy request", "Bender");

    simon.signForm(*form);
    simon.executeForm(*form);

    delete form;

    Form *nullForm = someRandomIntern.makeForm("null form", "Bender");
    delete nullForm;
}
