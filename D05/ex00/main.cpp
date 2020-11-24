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
#include <exception>
#include <iostream>

int main() {
    try {
        Bureacrat Bob = Bureacrat("Bob", 100);
        Bob.incrementGrade();
        Bob.incrementGrade();
        std::cout << "The grade of " << Bob.getName() << " is " << Bob.getGrade() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureacrat Bob = Bureacrat("Bob", 100);
        Bob.decrementGrade();
        Bob.decrementGrade();
        std::cout << "The grade of " << Bob.getName() << " is " << Bob.getGrade() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureacrat Bob = Bureacrat("Bob", 150);
        Bob.decrementGrade();
        Bob.decrementGrade();
        std::cout << "The grade of " << Bob.getName() << " is " << Bob.getGrade() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureacrat Bob = Bureacrat("Bob", 0);
        Bob.incrementGrade();
        Bob.incrementGrade();
        std::cout << "The grade of " << Bob.getName() << " is " << Bob.getGrade() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
