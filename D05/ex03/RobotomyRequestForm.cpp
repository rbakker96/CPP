/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 10:46:30 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/25 10:46:30 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm() :
        AForm("RobotomyRequestForm", 72, 45), _target("target")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
        AForm("RobotomyRequestForm", 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) :
        AForm("RobotomyRequestForm", 72, 45), _target(src._target)
{
    *this = src;
}

RobotomyRequestForm &		RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    if (this != &rhs)
        this->_target = rhs._target;
    return (*this);
}

void    RobotomyRequestForm::execute(Bureacrat const & executor) const {
    if (executor.getGrade() > getExecuteGrade())
        throw GradeTooLowException();
    else if (getSign() == false)
        throw FormNotSignedException();
    else {
        std::cout << "* Makes some drilling noises *" << std::endl;
        std::cout << _target << " has been robotomized successfully 50% of the time" << std::endl;
    }
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}