/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 10:00:15 by roybakker     #+#    #+#                 */
/*   Updated: 2020/07/31 11:07:14 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Pony.hpp"

Pony::Pony(std::string pony_name) : _pony_name(pony_name)
{
	std::cout << this->_pony_name << " is born, congrats!" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << this->_pony_name << " died, my condoleances" << std::endl;
}
