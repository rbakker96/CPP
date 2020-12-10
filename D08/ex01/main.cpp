/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 15:58:50 by rbakker       #+#    #+#                 */
/*   Updated: 2020/12/03 15:58:50 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main()
{
    srand(time(NULL));
    Span sp = Span(20);

    std::cout << "------ 0 NUMBERS ------" << std::endl;
    try {
        std::cout << sp.shortestSpan();
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl << std::endl;
    }


    std::cout << "------ ADDING TO A SIZE OF ZERO ------" << std::endl;
    Span sp_zero = Span(0);
    try {
        sp_zero.addNumber(1);
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "------ 20 RANDOM NUMBERS ------" << std::endl;
    for (int x = 0; x < 20; x++) {
        int i = rand() % 100;
        std::cout << i << std::endl;
        sp.addNumber(i);
    }
    std::cout << std::endl << "shortest span = " << sp.shortestSpan() << std::endl;
    std::cout << std::endl << "longest span = " << sp.longestSpan() << std::endl;


    std::cout << std::endl << "------ 21th NUMBER ------" << std::endl;
    //ALSO USED COPY/ASSIGNMENT OPERATOR
    Span sp_three = Span(sp);
    try {
        sp_three.addNumber(21);
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }


    std::cout << std::endl << "------ 1000 RANDOM NUMBERS ------" << std::endl;
    Span sp_two = Span(1000);
    std::vector<int> test_vector;
    for (int x = 0; x < 1000; x++) {
        int i = rand() % 2000;
        test_vector.push_back(i);
    }
    sp_two.addNumber(test_vector);


    std::cout << std::endl << "shortest span = " << sp_two.shortestSpan() << std::endl;
    std::cout << std::endl << "longest span = " << sp_two.longestSpan() << std::endl;

    std::cout << std::endl << "------ ADD A 1000 RANDOM NUMBERS EXTRA ? ------" << std::endl;
    try {
        sp_two.addNumber(test_vector);
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }


    return 0;
}


//int main()
//{
//    Span sp = Span(5);
//    sp.addNumber(5);
//    sp.addNumber(3);
//    sp.addNumber(17);
//    sp.addNumber(9);
//    sp.addNumber(11);
//
//    std::cout << sp.shortestSpan() << std::endl;
//    std::cout << sp.longestSpan() << std::endl;
//
//    return 0;
//}