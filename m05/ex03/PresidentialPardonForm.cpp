#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("Presidential pardon", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
    Form::operator=(rhs);
    return *this;
}

void PresidentialPardonForm::run() const {
    std::cout << this->getTarget() << " a été pardonnée par Zafod Beeblebrox" << std::endl;
}

Form *PresidentialPardonForm::create(const std::string &target) {
    return new PresidentialPardonForm(target);
}
