/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 11:23:28 by roybakker         #+#    #+#             */
/*   Updated: 2020/08/03 15:53:36 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <string>
#include <array>

ZombieEvent::ZombieEvent( void )
{}

void            ZombieEvent::setZombieType(std::string type)
{
    this->_chosen_type = type;             
}


Zombie          *ZombieEvent::newZombie(std::string name)
{
    Zombie  *zombie= new Zombie(name, this->_chosen_type);
    return (zombie);   
}

void     ZombieEvent::randomChump()
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
    
    Zombie zombie(zombie_names[rand() % 8], this->_chosen_type);
}

ZombieEvent::~ZombieEvent()
{}