/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonPresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 10:46:45 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/25 10:46:45 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CLASS_H
#define PRESIDENTIALPARDONFORM_CLASS_H
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureacrat;

class PresidentialPardonForm : public AForm
{

private:
    PresidentialPardonForm();
    std::string   _target;

public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    ~PresidentialPardonForm();

    PresidentialPardonForm & operator=(PresidentialPardonForm const &rhs);

    void execute(Bureacrat const & executor) const;
};

#endif