/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 14:33:41 by rbakker           #+#    #+#             */
/*   Updated: 2020/08/03 14:50:00 by rbakker          ###   ########.fr       */
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

    std::string     randomName();    

private:
    std::string     _chosen_type;

};

#endif