/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 11:23:06 by roybakker         #+#    #+#             */
/*   Updated: 2020/08/03 15:53:25 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include <string>
#include <array>

Zombie::Zombie()
{
    _name = randomName();
    _type = "Horde member";
    announce();
}

void    Zombie::announce()
{
    std::cout << "<" << this->_name << " (" << this->_type << ")>" << " He wants braiiiiiiinnnssss..." << std::endl;
}

std::string     Zombie::randomName()
{
    std::array<std::string, 8> zombie_names;
    zombie_names[0] = "Creeper";
    zombie_names[1] = "Barebone";
    zombie_names[2] = "Walking bones";
    zombie_names[3] = "Lurker";
    zombie_names[4] = "Skin eater";
    zombie_names[5] = "Brainiac";
    zombie_names[6] = "Walking dead";
    zombie_names[7] = "Cold body";
    
    return (zombie_names[rand() % 8]);
}


Zombie::~Zombie()
{
    std::cout << "<" << this->_name << ">" << " has returned to the land of the death" << std::endl;
}