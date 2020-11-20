/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 13:06:57 by rbakker       #+#    #+#                 */
/*   Updated: 2020/11/19 13:06:57 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_H
#define CHARACTER_CLASS_H
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{

protected:
    Character();
    AMateria        *_inventory[4];
    std::string     _name;

public:
    Character(std::string name);
    Character(const Character& src);
    virtual ~Character();

    Character & operator=(const Character& rhs);

    const std::string& getName() const;
    void equip(AMateria* materia);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif