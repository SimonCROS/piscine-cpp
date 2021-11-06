#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : grade(150) {}

Bureaucrat::Bureaucrat(std::string name, unsigned short grade) : name(name), grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.name), grade(src.grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &src) {
    this->grade = src.grade;
    return *this;
}

const std::string & Bureaucrat::getName() const {
    return this->name;
}

unsigned short Bureaucrat::getGrade() const {
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

void Bureaucrat::signForm(Form &form) {
    try {
        form.beSigned(*this);
        std::cout << this->getName() << " a signé \"" << form.getName() << "\"" << std::endl;
    } catch (std::exception &e) {
        std::cout << this->getName() << " ne peut pas signer \"" << form.getName() << "\" car : " << e.what() << std::endl;
    }
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high.";
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low.";
}

std::ostream & operator<<(std::ostream &o, const Bureaucrat &i)
{
    return o << i.getName() << ", bureaucrate grade " << i.getGrade() << ".";
}
