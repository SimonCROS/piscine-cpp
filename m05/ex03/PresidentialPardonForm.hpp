#ifndef PRESIDENTIAL_PARDON_FORM_H
#define PRESIDENTIAL_PARDON_FORM_H

#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form {
private:
    PresidentialPardonForm();
protected:
    virtual void run() const;
public:
    PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &src);
    ~PresidentialPardonForm();
    PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

    static Form *create(const std::string &target);
};

#endif
