/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 17:32:15 by rbakker           #+#    #+#             */
/*   Updated: 2020/08/04 12:00:53 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Human.hpp"

Human::Human()
{}

const Brain   &Human::getBrain()
{
    return (this->_my_brain);
}

const Brain   *Human::identify() const 
{
    return (this->_my_brain.identify());
}

Human::~Human()
{}