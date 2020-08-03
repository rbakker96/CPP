/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 11:23:37 by roybakker         #+#    #+#             */
/*   Updated: 2020/08/03 13:41:29 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
#define ZOMBIE_EVENT_H
#include "Zombie.hpp"
#include <string>

class ZombieEvent {

public:

    ZombieEvent(void);
    ~ZombieEvent(void);

    void            setZombieType(std::string type);
    Zombie          *newZombie(std::string name);
    void            randomChump(void);

private:
    std::string     _chosen_type;

};

#endif