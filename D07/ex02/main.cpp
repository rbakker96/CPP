/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/02 15:19:23 by roybakker     #+#    #+#                 */
/*   Updated: 2020/12/02 15:19:23 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "array.hpp"

int main( void ) {

    //Construction without size
    std::cout << "Constructor with no args -" << std::endl;
    Array<char> C = Array<char>();
    std::cout << "Size = " << C.size() << std::endl;


    //Construction with size
    Array<int> A = Array<int>(5);
    A[0] = 11;
    A[1] = 22;
    A[2] = 33;
    A[3] = 44;
    A[4] = 55;
    std::cout << std::endl  << "Constructor with fixed size -" << std::endl;
    for (int i = 0; i < 5; i++)
        std::cout << A[i] << " ";
    std::cout << std::endl << "Size = " << A.size() << std::endl;


    //Copy constructor
    std::cout << std::endl << "Copy constructor -" << std::endl;
    Array<int> B = Array<int>(A);
    for (int i = 0; i < 5; i++)
        std::cout << B[i] << " ";
    std::cout << std::endl << "Size = " << B.size() << std::endl;


    //Assignment operator
    std::cout << std::endl << "Assignment operator -" << std::endl;
    Array<std::string> string_two = Array<std::string>();
    Array<std::string> string_one = Array<std::string>(4);
    string_one[0] = "first";
    string_one[1] = "second";
    string_one[2] = "third";
    string_one[3] = "fourth";

    string_two = string_one;
    for (int i = 0; i < 4; i++)
        std::cout << string_two[i] << " ";
    std::cout << std::endl << "Size = " << string_two.size() << std::endl;

    //call to out of bounce index
    std::cout << std::endl << "Call to out of bonce index -" << std::endl;
    try {
        string_two[5];
    }
    catch (std::exception& e) {
        std::cout << "Exception -> " << e.what() << std::endl;
    }


    return 0;
}
