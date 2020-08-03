/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 11:23:06 by roybakker         #+#    #+#             */
/*   Updated: 2020/08/03 14:22:43 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include <string>

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
    announce();
}

void    Zombie::announce()
{
    std::cout << "<" << this->_name << " (" << this->_type << ")>" << " He wants braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "<" << this->_name << ">" << " has officially returned to the land of the death" << std::endl;
}