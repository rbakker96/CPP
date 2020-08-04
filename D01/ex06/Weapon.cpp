/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 12:44:31 by rbakker           #+#    #+#             */
/*   Updated: 2020/08/04 13:56:09 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include <string>

Weapon::Weapon(std::string type) : _type(type)
{}

Weapon::~Weapon(void)
{}


void            Weapon::setType(std::string type)
{
    this->_type = type;
}

std::string     Weapon::getType(void)
{
    return (this->_type);
}