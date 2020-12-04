/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 15:58:21 by rbakker       #+#    #+#                 */
/*   Updated: 2020/12/03 15:58:21 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_CLASS_H
#define EASYFIND_CLASS_H
#include <stdexcept>
#include <algorithm>
#include <vector>

template <typename T>
typename T::iterator     easyfind(T container, const int& target) {

    typename T::iterator iter;

    iter = std::find(container.begin(), container.end(), target);
    if (iter != container.end())
        std::cout << "Occurence " << target << " found." << std::endl;
    else
        throw std::runtime_error("Occurence not found");
    return (iter);
}

#endif
