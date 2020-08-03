/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 14:33:46 by rbakker           #+#    #+#             */
/*   Updated: 2020/08/03 17:22:07 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <string>
#include <array>

ZombieHorde::ZombieHorde(int N) : counter(N)
{
    this->_zombie_horde = new Zombie[N];

    for(int i = 0; i < N; i++)
        this->_zombie_horde[i].set_value(randomName(), "Horde member");
}

std::string     ZombieHorde::randomName()
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

void    ZombieHorde::announce()
{
    for(int i = 0; i < counter; i++)
        this->_zombie_horde[i].announce();
    std::cout << '\n'; 
}

ZombieHorde::~ZombieHorde(void)
{
    delete [] _zombie_horde;
}