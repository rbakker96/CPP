/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 19:41:10 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/25 19:41:10 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{

}

Intern::Intern(Intern const &src)
{
    *this = src;
}

Intern &		Intern::operator=(Intern const &rhs)
{
    if (this != &rhs)
        return (*this);
    return (*this);
}

AForm *    Intern::makeForm(std::string formName, std::string target)
{
    AForm *neededForm = NULL;
    AForm *availableForms[3];
    availableForms[0] = new PresidentialPardonForm(target);
    availableForms[1] = new RobotomyRequestForm(target);
    availableForms[2] = new ShrubberyCreationForm(target);

   for (int i = 0; i < 3; i++) {
       if (formName == availableForms[i]->getName()) {
           neededForm = availableForms[i];
           std::cout << "Intern creates " << formName << std::endl;
       }
       else
           delete availableForms[i];
   }
   if (!neededForm)
       std::cout << formName << " no such form available." << std::endl;
    return (neededForm);
}

Intern::~Intern()
{

}