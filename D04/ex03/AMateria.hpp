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
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{

private:
    unsigned int        _xp;
    const std::string   _type;

protected:
    AMateria();

public:
    AMateria(const std::string& type);
    AMateria(const AMateria& src);
    AMateria& operator=(const AMateria& rhs);
    virtual ~AMateria();

    const std::string& getType() const;
    unsigned int getXP() const;
    void setXP(unsigned int new_xp);

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

};

#endif