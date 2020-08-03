/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 11:23:16 by roybakker         #+#    #+#             */
/*   Updated: 2020/08/03 15:35:38 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
#define ZOMBIE_CLASS_H
#include <string>

class Zombie {

public:

    Zombie(void);
    ~Zombie(void);
    void            announce();
    std::string     randomName();
    
private:
    std::string     _name;
    std::string     _type;

};

#endif