/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 11:23:16 by roybakker         #+#    #+#             */
/*   Updated: 2020/08/03 14:18:42 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string>

class Zombie {

public:

    Zombie(std::string name, std::string type);
    ~Zombie(void);
    void            announce();
    
private:
    std::string     _name;
    std::string     _type;

};

#endif