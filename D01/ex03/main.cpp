/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 14:25:10 by rbakker           #+#    #+#             */
/*   Updated: 2020/08/03 17:21:54 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <string>

int     main(void)
{
    ZombieHorde horde(15);

    horde.announce();
}