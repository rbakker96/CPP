/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/24 15:53:47 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/24 15:53:47 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form() :
 _name("form"), _sign(false), _sign_grade(100), _execute_grade(100)
{

}

Form::Form(std::string name, int sign_grade, int execute_grade) :
    _name(name), _sign(false), _sign_grade(sign_grade), _execute_grade(execute_grade)
{
    if (_sign_grade < 1 || _execute_grade < 1)
        throw GradeTooHighException();
    else if (_sign_grade > 150 || _execute_grade > 150)
        throw GradeTooLowException();
}

Form::Form(Form const &src) :
    _name(src.getName()), _sign(src.getSign()), _sign_grade(src.getSignGrade()), _execute_grade(src.getExecuteGrade())
{
    *this = src;
}

Form &		Form::operator=(Form const &rhs)
{
    if (this != &rhs)
        this->_sign = rhs._sign;
    return (*this);
}

std::string     Form::getName() const {
    return (_name);
}

int     Form::getSign() const {
    return (_sign);
}

int     Form::getSignGrade() const {
    return (_sign_grade);
}

int     Form::getExecuteGrade() const {
    return (_execute_grade);
}

void    Form::beSigned(Bureacrat& bureacrat) {
    if (bureacrat.getGrade() > _sign_grade)
        throw GradeTooLowException();
    else
        _sign = true;
}

std::ostream & operator<<(std::ostream & out, Form const &src)
{
    out << "The Form called \"" << src.getName() << "\" ";
    out << ", the sign grade is " << src.getSignGrade();
    out << " and the exectue grade is " << src.getExecuteGrade();
    out << ". The siging status is " << src.getSign() << std::endl;
    return (out);
}

Form::~Form()
{

}
