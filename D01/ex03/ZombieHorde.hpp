/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 14:33:41 by rbakker           #+#    #+#             */
/*   Updated: 2020/08/03 17:02:50 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_CLASS_H
#define ZOMBIE_HORDE_CLASS_H
#include "Zombie.hpp"
#include <string>

class ZombieHorde {

public:

    ZombieHorde(int N);
    ~ZombieHorde(void);

    void            announce();
    std::string     randomName();    

private:
    Zombie      *_zombie_horde;
    int         counter;
};

#endif