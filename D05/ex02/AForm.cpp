/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/24 15:53:47 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/24 15:53:47 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

AForm::AForm() :
    _name("form"), _sign(false), _sign_grade(100), _execute_grade(100)
{

}

AForm::AForm(std::string name, int sign_grade, int execute_grade) :
    _name(name), _sign(false), _sign_grade(sign_grade), _execute_grade(execute_grade)
{
    if (_sign_grade < 1 || _execute_grade < 1)
        throw GradeTooHighException();
    else if (_sign_grade > 150 || _execute_grade > 150)
        throw GradeTooLowException();
}

AForm::AForm(AForm const &src) :
    _name(src.getName()), _sign(src.getSign()), _sign_grade(src.getSignGrade()), _execute_grade(src.getExecuteGrade())
{
    *this = src;
}

AForm &		AForm::operator=(AForm const &rhs)
{
    this->_sign = rhs._sign;
    return (*this);
}

std::string     AForm::getName() const {
    return (_name);
}

int     AForm::getSign() const {
    return (_sign);
}

int     AForm::getSignGrade() const {
    return (_sign_grade);
}

int     AForm::getExecuteGrade() const {
    return (_execute_grade);
}

void    AForm::beSigned(Bureacrat& bureacrat) {
    if (bureacrat.getGrade() > _sign_grade)
        throw GradeTooLowException();
    else
        _sign = true;
}

std::ostream & operator<<(std::ostream & out, AForm const &src)
{
    out << "The AForm called \"" << src.getName() << "\" ";
    out << ", the sign grade is " << src.getSignGrade();
    out << " and the exectue grade is " << src.getExecuteGrade();
    out << ". The siging status is " << src.getSign() << std::endl;
    return (out);
}

AForm::~AForm()
{

}
