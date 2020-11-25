/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 10:46:23 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/25 10:46:23 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_CLASS_H
#define SHRUBBERYCREATIONFORM_CLASS_H
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureacrat;

class ShrubberyCreationForm : public AForm
{

private:
    ShrubberyCreationForm();
    std::string   _target;

public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm & operator=(ShrubberyCreationForm const &rhs);

    void execute(Bureacrat const & executor) const;
};

#endif
