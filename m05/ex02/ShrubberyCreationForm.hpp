#ifndef SHRUBBERY_CREATION_FORM_H
#define SHRUBBERY_CREATION_FORM_H

#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form {
private:
    ShrubberyCreationForm();
protected:
    virtual void run() const;
public:
    ShrubberyCreationForm(const std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

    static Form *create(const std::string &target);
};

#endif
