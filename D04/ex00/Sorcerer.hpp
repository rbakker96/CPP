/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 10:58:12 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/10 11:32:35 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_CLASS_H
#define SORCERER_CLASS_H
#include <string>
#include "Victim.hpp"

class Sorcerer {

private:
	Sorcerer();
	std::string		_name;
	std::string		_title;

public:

	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &src);
    ~Sorcerer();

	Sorcerer & operator=(Sorcerer const &rhs);

	void polymorph(Victim const &target) const;

	const std::string &		get_title() const;
	const std::string &		get_name() const;
};

std::ostream & operator<<(std::ostream & out, Sorcerer const &src);

#endif
