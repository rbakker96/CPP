/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 13:06:46 by rbakker       #+#    #+#                 */
/*   Updated: 2020/11/19 13:06:46 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <string>

Character::Character()
{

}

Character::Character(std::string name)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(Character const &src)
{
    *this = src;
}

Character &		Character::operator=(Character const &rhs)
{
    for (int i = 0; i < _used_inventory; i++)
        delete this->_inventory[i];
    _used_inventory = rhs._used_inventory;
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    for (int i = 0; i < _used_inventory; i++)
        _inventory[i] = rhs._inventory
    return (*this);
}

const std::string& Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{

}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter& target)
{

}

Character::~Character()
{

}