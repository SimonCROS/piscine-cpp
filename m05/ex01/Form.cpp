#include "Form.hpp"

Form::Form() : gradeToSign(150), gradeToExecute(150), _signed(false) {}

Form::Form(std::string name, unsigned short gradeToSign, unsigned short gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), _signed(false) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooLowException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooHighException();
}

Form::Form(const Form &src) : name(src.name), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute), _signed(src._signed) {}

Form::~Form() {}

Form & Form::operator=(const Form &src) {
    this->_signed = src._signed;
    return *this;
}

const std::string & Form::getName() const {
    return this->name;
}

unsigned short Form::getGradeToSign() const {
    return this->gradeToSign;
}

unsigned short Form::getGradeToExecute() const {
    return this->gradeToExecute;
}

bool Form::isSigned() const {
    return this->_signed;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->gradeToSign)
        throw Form::GradeTooLowException();
    this->_signed = true;
}

const char * Form::GradeTooHighException::what() const throw() {
    return "Grade too high.";
}

const char * Form::GradeTooLowException::what() const throw() {
    return "Grade too low.";
}

std::ostream & operator<<(std::ostream &o, const Form &i)
{
    return o << i.getName() << ", formulaire " << (i.isSigned() ? "signé" : "non signé") << " de niveau " << i.getGradeToExecute() << " pouvant être signe par les bureaucrates de niveau " << i.getGradeToSign() << ".";
}
