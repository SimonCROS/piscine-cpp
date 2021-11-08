#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Intern {
public:
    Intern();
    Intern(const Intern &src);
    ~Intern();
    Intern &operator=(const Intern &rhs);

    Form *makeForm(const std::string &form, const std::string &target) const;
};

struct form_type {
    std::string type;
    Form *(*builder)(const std::string &);
};

std::ostream &operator<<(std::ostream &o, const Intern &i);

#endif
