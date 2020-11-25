/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 19:41:05 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/25 19:41:05 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_H
#define INTERN_CLASS_H
#include <string>
#include "AForm.hpp"

class Intern
{

public:
    Intern();
    Intern(Intern const &src);
    ~Intern();

    Intern & operator=(Intern const &rhs);

    AForm * makeForm(std::string formName, std::string target);
};

#endif
