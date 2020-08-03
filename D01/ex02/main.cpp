/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 11:23:48 by roybakker         #+#    #+#             */
/*   Updated: 2020/08/03 14:22:36 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <string>

int         main(void)
{
    ZombieEvent      create_zombie;

    create_zombie.setZombieType("ALIVE");
    Zombie *zombie_one = create_zombie.newZombie("Mr. Walking dead");
    Zombie *zombie_two = create_zombie.newZombie("Mr. Skin Eater");

    create_zombie.setZombieType("A CHUMP");
    for(int i = 0; i < 15; i++)
        create_zombie.randomChump();
    
    delete zombie_one;
    delete zombie_two;
}