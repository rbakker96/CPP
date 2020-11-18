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

Squad::Squad() : head(NULL)
{

}

Squad::Squad(Squad const &cpy_squad)
{
    this->head = new node;

	if (cpy_squad.head)
	{
        node *copied_squad = cpy_squad.head;
        node *new_squad = this->head;

        while (copied_squad->next != NULL)
        {
            new_squad->soldier = copied_squad->soldier->clone();
            if (copied_squad->next != NULL)
            {
                new_squad->next = new node;
                copied_squad = copied_squad->next;
            }
        }
        new_squad->next = NULL;
    }
	else
	    this->head = NULL;
}

Squad &		Squad::operator=(Squad const &rhs)
{
    if (rhs.head)
    {
        node *copied_squad = rhs.head;
        node *new_squad = this->head;
        node *tmp;

        while (copied_squad->next != NULL)
        {
            new_squad->soldier = copied_squad->soldier->clone();
            delete copied_squad->soldier;
            if (copied_squad->next != 0)
            {
                new_squad->next = new node;
                tmp = copied_squad->next;
                delete copied_squad->next;
                copied_squad = tmp;
            }
        }
        new_squad->next = NULL;
    }
    else
        this->head = NULL;
    return (*this);
}

int Squad::getCount() const
{
	int i = 1;
	node *list = head;

    if (!head)
        return (0);
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
	if (list->soldier && i == n)
	    return (list->soldier);
    return NULL;
}

int Squad::push(ISpaceMarine *new_soldier)
{
    if (new_soldier == NULL)
        return (getCount());
	node *new_node = new node;
	new_node->next = NULL;
	new_node->soldier = new_soldier;
    if (!head)
	    head = new_node;
	else
    {
        node *list = head;
        while (list->next != NULL)
            list = list->next;
        list->next = new_node;
    }
	return (getCount());
}

Squad::~Squad()
{
    if (head)
    {
        while (head->next != 0)
        {
            delete head->soldier;
            delete head;
            head = head->next;
        }
        delete head->soldier;
        delete head;
    }
}
