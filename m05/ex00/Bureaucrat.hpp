#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat {
private:
    const std::string name;
    unsigned short grade;

    Bureaucrat();
public:
    Bureaucrat(const std::string &name, unsigned short grade);
    Bureaucrat(const Bureaucrat &src);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &rhs);

    void promote();
    void demote();
    const std::string &getName() const;
    unsigned short getGrade() const;

    class GradeTooHighException : public std::exception {
    public:
        const char *what() const throw ();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char *what() const throw ();
    };
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &i);

#endif
