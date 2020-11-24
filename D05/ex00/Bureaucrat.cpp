/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/23 13:49:28 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/23 13:49:28 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureacrat::Bureacrat()
{

}

Bureacrat::Bureacrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
}

Bureacrat::Bureacrat(Bureacrat const &src)
{
    *this = src;
}

Bureacrat &		Bureacrat::operator=(Bureacrat const &rhs)
{
    if (this != &rhs)
        this->_grade = rhs._grade;
    return (*this);
}

std::string    Bureacrat::getName() {
    return (_name);
}

int    Bureacrat::getGrade() {
    return (_grade);
}

void    Bureacrat::decrementGrade() {
    if (_grade == 150)
        throw GradeTooLowException();
    else
        _grade += 1;
}

void    Bureacrat::incrementGrade() {
    if (_grade == 1)
        throw GradeTooLowException();
    else
        _grade -= 1;
}

Bureacrat::~Bureacrat()
{

}