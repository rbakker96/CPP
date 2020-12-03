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
#include "iter.hpp"

int main( void ) {

    int int_array[5] = {11, 22, 33, 44, 55};
    std::string string_array[5] = {"first", "second", "third", "fourth", "fifth"};

    iter<int>(int_array, 5, print);
    iter<std::string>(string_array, 5, print);

    return 0;
}
