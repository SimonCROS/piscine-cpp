#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.name), grade(src.grade) {}

const std::string & Bureaucrat::getName() {
    return this->name;
}

const short Bureaucrat::getGrade() {
    return this->grade;
}

void Bureaucrat::promote() {
    if (this->grade == 1)
        throw Bureaucrat::GradeTooLowException();
    this->grade--;
}

void Bureaucrat::demote() {
    if (this->grade == 150)
        throw Bureaucrat::GradeTooHighException();
    this->grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high.";
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low.";
}
