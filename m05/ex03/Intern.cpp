#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(const Intern &src) { (void)src; }
Intern::~Intern() {}
Intern &Intern::operator=(const Intern &rhs) { (void)rhs; return *this; }

Form *Intern::makeForm(const std::string &form, const std::string &target) const {
    static const Form *(*forms)()[] =
    return (NULL);
}
