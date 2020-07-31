/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 10:01:04 by roybakker     #+#    #+#                 */
/*   Updated: 2020/07/31 11:14:10 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony pony = Pony("The stack pony");
}

void	ponyOnTheHeap(void)
{
	Pony *pony = new Pony("The heap pony");
	delete pony;
}

int		main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}
