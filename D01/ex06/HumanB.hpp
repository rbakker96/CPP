/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 12:45:18 by rbakker           #+#    #+#             */
/*   Updated: 2020/08/04 14:42:20 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_CLASS_H
#define HUMAN_B_CLASS_H
#include "Weapon.hpp"
#include <string>

class HumanB {

public:

    HumanB(std::string name);
    ~HumanB(void);

    void    attack(void);
    void    setWeapon(Weapon &weapon);

private:
    std::string     _name;
    Weapon          *_weapon;
     
};

#endif