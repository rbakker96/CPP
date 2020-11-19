/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 13:07:24 by rbakker       #+#    #+#                 */
/*   Updated: 2020/11/19 13:07:24 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_H
#define ICE_CLASS_H
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{

public:
    Ice();
    Ice(const Ice& src);
    virtual ~Ice();

    Ice & operator=(Ice const &rhs);

    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif
