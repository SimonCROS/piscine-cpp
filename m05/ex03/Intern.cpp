#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}
Intern::Intern(const Intern &src) { (void)src; }
Intern::~Intern() {}
Intern &Intern::operator=(const Intern &rhs) { (void)rhs; return *this; }

Form *Intern::makeForm(const std::string &form, const std::string &target) const {
    static const form_type forms[] = {
            {"shrubbery creation", ShrubberyCreationForm::create},
            {"robotomy request", RobotomyRequestForm::create},
            {"presidential pardon", PresidentialPardonForm::create},
            {"", NULL}
    };
    for (int i = 0; forms[i].builder; ++i) {
        form_type type = forms[i];
        if (type.type == form)
            return type.builder(target);
    }
    std::cout << "Désolé monsieur, je ne connais pas ce formulaire..." << std::endl;
    return (NULL);
}
