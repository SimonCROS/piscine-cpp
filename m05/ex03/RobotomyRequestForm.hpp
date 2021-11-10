#ifndef ROBOTOMY_REQUEST_FORM_H
#define ROBOTOMY_REQUEST_FORM_H

#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form {
private:
    RobotomyRequestForm();
protected:
    virtual void run() const;
public:
    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &src);
    ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

    static Form *create(const std::string &target);
};

#endif
