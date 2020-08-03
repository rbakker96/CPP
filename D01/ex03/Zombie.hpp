/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 11:23:16 by roybakker         #+#    #+#             */
/*   Updated: 2020/08/03 17:03:04 by rbakker          ###   ########.fr       */
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
    void            set_value(std::string name, std::string type);
   
private:
    std::string     _name;
    std::string     _type;

};

#endif