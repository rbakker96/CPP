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
#include "whatever.hpp"

//int main()
//{
//    int A = 10;
//    int B = 20;
//
//    std::cout << "Swap A = " << A << " en B = " << B << std::endl;
//    swap<int>(A, B);
//    std::cout << "New A = " << A << " en B = " << B << std::endl;
//    std::cout << "Min - lowest value = " << min<int>(A, B) << std::endl;
//    std::cout << "Max - highest value = " << max<int>(A, B) << std::endl;
//
//    std::cout << std::endl;
//
//    float C = 10.234;
//    float D = 20.567;
//
//    std::cout << "Swap C = " << C << " en D = " << D << std::endl;
//    swap<float>(C, D);
//    std::cout << "New C = " << C << " en D = " << D << std::endl;
//    std::cout << "Min - lowest value = " << min<float>(C, D) << std::endl;
//    std::cout << "Max - highest value = " << max<float>(C, D) << std::endl;
//}

int main( void ) {
    int a = 2;
    int b = 3;

    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    return 0;
}