/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 12:44:39 by rbakker           #+#    #+#             */
/*   Updated: 2020/08/04 13:55:35 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
#define WEAPON_CLASS_H
#include <string>

class Weapon {

public:

    Weapon(std::string type);
    ~Weapon(void);

    void            setType(std::string type);
    std::string     getType(void);

private:
     std::string    _type;

};

#endif