/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 10:00:24 by roybakker     #+#    #+#                 */
/*   Updated: 2020/07/31 11:06:50 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_CLASS_H
#define PONY_CLASS_H
#include <string>

class Pony {

public:

    Pony(std::string pony_name);
    ~Pony( void );

private:
	std::string		_pony_name;

};

#endif
