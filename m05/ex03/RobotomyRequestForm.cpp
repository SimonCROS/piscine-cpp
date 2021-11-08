#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("Robotomy request", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
    Form::operator=(rhs);
    return *this;
}

void RobotomyRequestForm::run() const {
    srand(time(0));
    std::cout << "bvvv bvvv vvvvvvvvvv" << std::endl;
    if (std::rand() % 2 == 0)
        std::cout << this->getTarget() << " a bien été robotomizé" << std::endl;
    else
        std::cout << this->getTarget() << " : robotomization échouée." << std::endl;
}
