/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjung <hyunjung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:51:04 by hyunjung          #+#    #+#             */
/*   Updated: 2022/12/22 17:56:56 by hyunjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
AForm::AForm() : _name(), _signGrade(), _executeGrade() {}

AForm::AForm(std::string name, int signGrade, int executeGrade)
    : _name(name), _signGrade(signGrade), _executeGrade(executeGrade) {
    if (signGrade < 1 || executeGrade < 1) {
        throw AForm::GradeTooHighException();
    } else if (signGrade > 150 || executeGrade > 150) {
        throw AForm::GradeTooLowException();
    }
};

AForm::AForm(const AForm &ref)
    : _name(ref._name), _signGrade(ref._signGrade),
      _executeGrade(ref._executeGrade) {
    *this = ref;
};
AForm::~AForm() {}

AForm &AForm::operator=(const AForm &ref) {
    if (this != &ref) {
        this->_isSigned = ref._isSigned;
    }
    return *this;
}

void AForm::beSigned(const Bureaucrat &obj) {
    if (obj.getGrade() <= this->_signGrade) {
        this->_isSigned = true;
    } else if (obj.getGrade() > this->_signGrade) {
        throw AForm::GradeTooLowException();
    }
}
int AForm::getSignGrade() const { return this->_signGrade; }
int AForm::getExecuteGrade() const { return this->_executeGrade; }
bool AForm::getSigned() const { return this->_isSigned; }
const std::string AForm::getName() const { return this->_name; }

std::ostream &operator<<(std::ostream &os, const AForm &obj) {
    os << obj.getName() << " signed : " << std::boolalpha << obj.getSigned()
       << " Sign Grade : " << obj.getSignGrade()
       << " Execute Grade : " << obj.getSignGrade();
    return os;
}

const char *AForm::GradeTooHighException::what() const throw() {
    return "Too high grade !";
}
const char *AForm::GradeTooLowException::what() const throw() {
    return "Too Low grade !";
}

const char *AForm::SCFHighException::what() const throw() {
    return "Too Shuberry high grade !";
}
const char *AForm::SCFLowException::what() const throw() {
    return "You have a not enough grade to sign something...!";
}
const char *AForm::SCFExecException::what() const throw() {
    return "You have a not enough grade to execute something...!";
}
const char *AForm::PPFHighException::what() const throw() {
    return "Too Presidential Pardon High grade !";
}
const char *AForm::PPFLowException::what() const throw() {
    return "Too Presidential Pardon Low grade !";
}

const char *AForm::RRFHighException::what() const throw() {
    return "Too Robot high grade !";
}
const char *AForm::RRFLowException::what() const throw() {
    return "Too Robot Low grade !";
}
