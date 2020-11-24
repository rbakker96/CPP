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
#include "Form.hpp"
#include <exception>
#include <iostream>

int main() {
    try {
        Bureacrat Bob = Bureacrat("Bob", 100);
        Form taxes = Form("Taxes", 80, 80);
        Bob.incrementGrade();
        Bob.incrementGrade();
        Bob.signForm(Bob, taxes);
        std::cout << Bob;
        std::cout << taxes;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureacrat Bob = Bureacrat("Bob", 100);
        Form taxes = Form("Taxes", 120, 120);
        Bob.decrementGrade();
        Bob.decrementGrade();
        Bob.signForm(Bob, taxes);
        std::cout << Bob;
        std::cout << taxes;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureacrat Bob = Bureacrat("Bob", 150);
        Form taxes = Form("Taxes", -1, 120);
        Bob.decrementGrade();
        Bob.decrementGrade();
        std::cout << Bob;
        std::cout << taxes;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureacrat Bob = Bureacrat("Bob", 2);
        Form taxes = Form("Taxes", 160, 120);
        Bob.incrementGrade();
        Bob.incrementGrade();
        std::cout << Bob;
        std::cout << taxes;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
