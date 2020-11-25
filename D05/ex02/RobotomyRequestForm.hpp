/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 10:46:36 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/25 10:46:36 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_CLASS_H
#define ROBOTOMYREQUESTFORM_CLASS_H
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureacrat;

class RobotomyRequestForm : public AForm
{

private:
    RobotomyRequestForm();
    std::string   _target;

public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    ~RobotomyRequestForm();

    RobotomyRequestForm & operator=(RobotomyRequestForm const &rhs);

    void execute(Bureacrat const & executor) const;
};

#endif