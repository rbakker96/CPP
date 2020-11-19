/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 13:07:11 by rbakker       #+#    #+#                 */
/*   Updated: 2020/11/19 13:07:11 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_H
#define CURE_CLASS_H
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{

public:
    Cure();
    Cure(Cure const &src);
    virtual ~Cure();

    Cure & operator=(Cure const &rhs);

    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif
