/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/24 15:23:58 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/24 15:23:58 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <exception>
#include <iostream>

int main() {
    try {
        Intern Barry = Intern();
        Bureacrat Bob = Bureacrat("Bob", 1);
        AForm* form_one = Barry.makeForm("PresidentialPardonForm", "form one");
        ShrubberyCreationForm form_two = ShrubberyCreationForm("form two");
        RobotomyRequestForm form_three = RobotomyRequestForm("form three");
        Bob.signForm(Bob, *form_one);
        Bob.signForm(Bob, form_two);
        Bob.signForm(Bob, form_three);
        Bob.executeForm(*form_one);
        Bob.executeForm(form_two);
        Bob.executeForm(form_three);
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
