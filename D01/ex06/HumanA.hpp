/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 12:44:59 by rbakker           #+#    #+#             */
/*   Updated: 2020/08/04 14:08:10 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CLASS_H
#define HUMAN_A_CLASS_H
#include "Weapon.hpp"
#include <string>

class HumanA {

public:

    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);

    void    attack();

private:
    std::string     _name;
    Weapon          &_weapon;

};

#endif