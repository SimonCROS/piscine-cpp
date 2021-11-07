#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    const std::string name;
    const unsigned short gradeToSign;
    const unsigned short gradeToExecute;
    bool _signed;

    Form();
public:
    Form(const std::string &name, unsigned short gradeToSign, unsigned short gradeToExecute);
    Form(const Form &src);
    ~Form();
    Form &operator=(const Form &src);

    const std::string &getName() const;
    bool isSigned() const;
    unsigned short getGradeToSign() const;
    unsigned short getGradeToExecute() const;
    void beSigned(const Bureaucrat &bureaucrat);

    class GradeTooHighException : public std::exception {
    public:
        const char *what() const throw ();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char *what() const throw ();
    };
};

std::ostream &operator<<(std::ostream &o, const Form &i);

#endif
