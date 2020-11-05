/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 10:58:12 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/05 17:42:24 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_CLASS_H
#define SORCERER_CLASS_H
#include <string>

class Sorcerer {

private:
	std::string		_name;
	std::string		_title;

public:

    virtual Sorcerer(void);
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &src);
    ~Sorcerer(void);

	Sorcerer & operator=(Sorcerer const &rhs);

};

#endif
