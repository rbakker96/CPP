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
#include <iostream>

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

std::string     Bureacrat::getName() const {
    return (_name);
}

int     Bureacrat::getGrade() const {
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

void    Bureacrat::signForm(Bureacrat& bureacrat, AForm& form)
{
    try {
        form.beSigned(bureacrat);
        std::cout << bureacrat.getName() << " signs " << form.getName() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << bureacrat.getName() << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void    Bureacrat::executeForm(AForm const & form)
{
    Bureacrat& bureacrat = *this;
    try {
        form.execute(bureacrat);
        std::cout << bureacrat.getName() << " executes " << form.getName() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << bureacrat.getName() << " failed because, " << e.what() << std::endl;
    }
}

std::ostream & operator<<(std::ostream & out, Bureacrat const &src)
{
    out << src.getName() << "'s bureacrat grade is " << src.getGrade() << std::endl;
    return (out);
}

Bureacrat::~Bureacrat()
{

}