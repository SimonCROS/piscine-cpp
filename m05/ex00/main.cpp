#include "Bureaucrat.hpp"

int main()
{
    std::cout << "---------- Gérard ----------" << std::endl;
    try {
        Bureaucrat gerard = Bureaucrat("Gérard", 149);
        std::cout << gerard << std::endl;
        gerard.demote();
        std::cout << gerard << std::endl;
        gerard.demote();
        std::cout << gerard << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "---------- George ----------" << std::endl;
    try {
        Bureaucrat george = Bureaucrat("George", 152);
        std::cout << george << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "---------- André ----------" << std::endl;
    try {
        Bureaucrat andre = Bureaucrat("André", 2);
        std::cout << andre << std::endl;
        andre.promote();
        std::cout << andre << std::endl;
        andre.promote();
        std::cout << andre << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "---------- Marie ----------" << std::endl;
    try {
        Bureaucrat marie = Bureaucrat("Marie", 0);
        std::cout << marie << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
