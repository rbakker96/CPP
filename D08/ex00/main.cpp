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
#include <list>
#include "easyfind.hpp"

int main ()
{
    //test with vector container
    std::vector<int> vect;
    for (int i = 0; i < 5; i++)
        vect.push_back(i);

    try {
        easyfind(vect, 4);
        easyfind(vect, 66);
    }
    catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    //test with list container
    std::list<int> list;

    for (int i = 10; i < 15; i++)
        list.push_back(i);
    try {
        easyfind(list, 14);
        easyfind(list, 30);
    }
    catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}