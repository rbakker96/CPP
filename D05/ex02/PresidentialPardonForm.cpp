/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonPresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 10:46:41 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/25 10:46:41 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() :
        AForm("PresidentialPardonForm", 25, 5), _target("target")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
        AForm("PresidentialPardonForm", 25, 5), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) :
        AForm("PresidentialPardonForm", 25, 5), _target(src._target)
{
    *this = src;
}

PresidentialPardonForm &		PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    if (this != &rhs)
        this->_target = rhs._target;
    return (*this);
}

void    PresidentialPardonForm::execute(Bureacrat const & executor) const
{
    if (executor.getGrade() > getExecuteGrade())
        throw GradeTooLowException();
    else if (getSign() == false)
        throw FormNotSignedException();
    else {
        std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
    }
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}