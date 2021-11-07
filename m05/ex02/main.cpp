#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout << "---------- shrubbery ----------" << std::endl;
    try {
        Bureaucrat chafik("Chafik", 120);

        ShrubberyCreationForm shrubbery("Campus_region_du_Numerique");
        chafik.signForm(shrubbery);
        chafik.executeForm(shrubbery);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "---------- robotomy ----------" << std::endl;
    try {
        Bureaucrat arthur("Arthur", 46);

        RobotomyRequestForm robotomy("La ligne Ge6");
        arthur.signForm(robotomy);
        arthur.executeForm(robotomy);
        arthur.promote();
        arthur.executeForm(robotomy);
        arthur.demote();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "---------- pardon ----------" << std::endl;
    try {
        Bureaucrat quentin("Quentin", 1);

        PresidentialPardonForm pardon("Manon");
        quentin.signForm(pardon);
        quentin.executeForm(pardon);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "---------- GradeTooLow ----------" << std::endl;
    try {
        Bureaucrat chafik("Chafik", 120);

        PresidentialPardonForm pardon("Manon");
        chafik.signForm(pardon);
        chafik.executeForm(pardon);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
