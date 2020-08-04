/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 17:31:52 by rbakker           #+#    #+#             */
/*   Updated: 2020/08/04 11:56:18 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Brain.hpp"

Brain::Brain(void)
{}

const Brain    *Brain::identify() const
{
    return (this);
}

Brain::~Brain(void)
{}