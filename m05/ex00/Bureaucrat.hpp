#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>

class Bureaucrat {
private:
    const std::string name;
    short grade;

    Bureaucrat();
public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &src);
    ~Bureaucrat();

    Bureaucrat& operator=(const Bureaucrat &src);

    void promote();
    void demote();
    const std::string &getName();
    const short getGrade();

    class GradeTooHighException : public std::exception {
        const char *what() const throw ();
    };

    class GradeTooLowException : public std::exception {
        const char *what() const throw ();
    };
};

#endif