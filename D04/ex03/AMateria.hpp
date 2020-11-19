/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 11:58:25 by rbakker       #+#    #+#                 */
/*   Updated: 2020/11/19 11:58:25 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_CLASS_H
#define IMATERIA_CLASS_H
#include <string>

class AMateria
{

private:
    [...]
    unsigned int _xp;

public:
    AMateria(std::string const & type);
    [...]
    [...] ~AMateria();
    std::string const & getType() const; //Returns the materia type
    unsigned int getXP() const; //Returns the Materia's XP

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

};

#endif