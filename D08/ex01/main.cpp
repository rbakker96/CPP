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
    Span sp = Span(50);

    std::cout << "0 NUMBERS" << std::endl;
    try {
        std::cout << sp.shortestSpan();
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }


    std::cout << std::endl << "50 RANDOM NUMBERS" << std::endl;
    for (int x = 0; x < 50; x++) {
        int i = rand() % 100;
        std::cout << i << std::endl;
        sp.addNumber(i);
    }
    std::cout << std::endl << "shortest span = " << sp.shortestSpan() << std::endl;
    std::cout << std::endl << "longest span = " << sp.longestSpan() << std::endl;


    std::cout << std::endl << "51th NUMBER" << std::endl;
    //ALSO USED COPY/ASSIGNMENT OPERATOR
    Span sp_two = Span(sp);
    try {
        sp_two.addNumber(56);
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