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
#include <vector>
#include "easyfind.hpp"

int main ()
{
    std::vector<int> vect;

    vect.push_back(11);
    vect.push_back(22);
    vect.push_back(33);
    vect.push_back(44);
    vect.push_back(55);

    try {
        easyfind(vect, 44);
        easyfind(vect, 66);
    }
    catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}