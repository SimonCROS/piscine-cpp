#ifndef ROBOTOMY_REQUEST_FORM_H
#define ROBOTOMY_REQUEST_FORM_H

#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form {
private:
    RobotomyRequestForm();
public:
    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &src);
    ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

    virtual void run() const;
};

#endif
