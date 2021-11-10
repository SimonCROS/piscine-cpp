#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    const std::string name;
    const std::string target;
    const unsigned short gradeToSign;
    const unsigned short gradeToExecute;
    bool _signed;
protected:
    Form();
    virtual void run() const = 0;
public:
    Form(const std::string &name, const std::string &target, unsigned short gradeToSign, unsigned short gradeToExecute);
    Form(const Form &src);
    virtual ~Form();
    Form &operator=(const Form &rhs);

    const std::string &getName() const;
    const std::string &getTarget() const;
    bool isSigned() const;
    unsigned short getGradeToSign() const;
    unsigned short getGradeToExecute() const;
    void beSigned(const Bureaucrat &bureaucrat);
    void execute(const Bureaucrat &executor) const;

    class GradeTooHighException : public std::exception {
    public:
        const char *what() const throw ();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char *what() const throw ();
    };

    class NotSignedException : public std::exception {
    public:
        const char *what() const throw ();
    };
};

std::ostream &operator<<(std::ostream &o, const Form &i);

#endif
