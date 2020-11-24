/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/23 13:49:31 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/23 13:49:31 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_H
#define BUREAUCRAT_CLASS_H
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureacrat
{

protected:
    Bureacrat();
    const std::string   _name;
    int                 _grade;

public:
    Bureacrat(std::string name, int grade);
    Bureacrat(Bureacrat const &src);
    ~Bureacrat();

    Bureacrat & operator=(Bureacrat const &rhs);

    std::string getName() const;
    int getGrade() const;

    void    decrementGrade();
    void    incrementGrade();

    void    signForm(Bureacrat& bureacrat, Form& form);

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char* what () const throw ()
        {
            return "Grade is too high";
        }
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char* what () const throw ()
        {
            return "Grade is too low";
        }
    };
};

std::ostream & operator<<(std::ostream & out, Bureacrat const &src);

#endif
