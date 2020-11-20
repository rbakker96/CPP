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
#include "AMateria.hpp"
#include <string>

Character::Character()
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = nullptr;
}

Character::Character(std::string name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = nullptr;
}

Character::Character(Character const &src)
{
    _name = src._name;
    for (int i = 0; i < 4; i++) {
        _inventory[i] = src._inventory[i]->clone();
    }
    *this = src;
}

Character &		Character::operator=(Character const &rhs)
{
    for (int i = 0; i < 4; i++) {
        if (_inventory[i] != nullptr)
            delete this->_inventory[i];
    }
    for (int i = 0; i < 4; i++)
        _inventory[i] = nullptr;
    for (int i = 0; i < 4; i++) {
        if (_inventory[i] != nullptr)
            _inventory[i] = rhs._inventory[i]->clone();
    }
    return (*this);
}

const std::string& Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* materia)
{
    for (int i = 0; i < 4; i++) {
        if (_inventory[i] == nullptr) {
            _inventory[i] = materia;
            break ;
        }
    }
}

void Character::unequip(int idx)
{
    for (int i = 0; i < 4; i++) {
        if (i == idx) {
            delete _inventory[idx];
            _inventory[idx] = nullptr;
        }
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3 && _inventory[idx] != nullptr) {
        _inventory[idx]->use(target);
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; i++) {
        if (_inventory[i] != nullptr)
            delete this->_inventory[i];
    }
}
