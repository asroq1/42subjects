/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjung <hyunjung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:29:23 by hyunjung          #+#    #+#             */
/*   Updated: 2022/12/21 11:31:31 by hyunjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){};

Bureaucrat::Bureaucrat(int grade, std::string name)
    : _name(name), _grade(grade) {

    if (_grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else if (_grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
}
Bureaucrat::Bureaucrat(const Bureaucrat &ref) { this->_grade = ref.getGrade(); }
Bureaucrat::~Bureaucrat(){};

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Too high grade !";
}
const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Too Low grade !";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ref) {
    if (this != &ref) {
        this->_grade = ref.getGrade();
    }
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj) {
    os << obj.getName() << " bureaucrat grade is " << obj.getGrade();
    return os;
}

std::string Bureaucrat::getName() const { return this->_name; }
int Bureaucrat::getGrade() const { return this->_grade; }
void Bureaucrat::increaseGrade(int grade) {
    this->_grade -= grade;
    if (this->getGrade() < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
}

void Bureaucrat::decreaseGrade(int grade) {
    this->_grade += grade;
    if (this->getGrade() > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
}