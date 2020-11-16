/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 10:16:51 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/16 14:59:26 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>
#include <string>

Squad::Squad(void)
{
	node *new_node = new node;

	new_node->next = NULL;
	this->head = new_node;
}

Squad::Squad(Squad const &src)
{
	while (head->next != 0)
	{
		delete head->soldier;
		head = head->next;
	}
	*this = src;
}

Squad &		Squad::operator=(Squad const &rhs)
{
	if (this != &rhs)
	{
		while (head->next != 0)
		{
			delete head->soldier;
			head = head->next;
		}
		*this = rhs;
	}
	return (*this);
}

int Squad::getCount() const
{
	int i = 0;
	node *list = head;

	while (list->next != NULL)
	{
		list = list->next;
		i++;
	}
	return (i);
}

ISpaceMarine* Squad::getUnit(int n) const
{
	int i = 0;
	node *list = head;

	while(list->next != NULL)
	{
		if (i == n)
			return(list->soldier);
		list = list->next;
		i++;
	}
	return (NULL);
}

int Squad::push(ISpaceMarine *new_soldier)
{
	node *list = head;

	while (list->next != NULL)
		list = list->next;
	list->soldier = new_soldier;
	node *new_node = new node;
	new_node->next = NULL;
	list->next = new_node;
	return (getCount());
}

Squad::~Squad(void)
{
	while (head->next != 0)
	{
		delete head->soldier;
		delete head;
		head = head->next;
	}
	delete head;
}
