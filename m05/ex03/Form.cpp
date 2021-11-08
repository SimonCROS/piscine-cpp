#include "Form.hpp"

Form::Form() : gradeToSign(150), gradeToExecute(150), _signed(false) {}

Form::Form(const std::string &name, const std::string &target, unsigned short gradeToSign, unsigned short gradeToExecute) : name(name), target(target), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), _signed(false) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooLowException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooHighException();
}

Form::Form(const Form &src) : name(src.name), target(src.target), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute), _signed(src._signed) {}

Form::~Form() {}

Form &Form::operator=(const Form &rhs) {
    this->_signed = rhs._signed;
    return *this;
}

const std::string &Form::getName() const {
    return this->name;
}

const std::string &Form::getTarget() const {
    return this->target;
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

void Form::execute(const Bureaucrat &executor) const {
    if (!this->isSigned())
        throw Form::NotSignedException();
    if (executor.getGrade() > this->gradeToExecute)
        throw Form::GradeTooLowException();
    this->run();
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Grade too high.";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Grade too low.";
}

const char *Form::NotSignedException::what() const throw() {
    return "Form not signed.";
}

std::ostream &operator<<(std::ostream &o, const Form &i)
{
    o << i.getName() << ", formulaire " << (i.isSigned() ? "signé" : "non signé") << " de niveau " << i.getGradeToExecute();
    if (!i.isSigned())
        o << " pouvant être signe par les bureaucrates de niveau " << i.getGradeToSign();
    o << ".";
    return o;
}
