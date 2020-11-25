/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/24 15:52:29 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/24 15:52:29 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_CLASS_H
#define AFORM_CLASS_H
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureacrat;

class AForm
{

private:
    AForm();
    const std::string   _name;
    bool                _sign;
    const int           _sign_grade;
    const int           _execute_grade;

public:
    AForm(std::string name, int sign_grade, int execute_grade);
    AForm(AForm const &src);
    virtual ~AForm();

    AForm & operator=(AForm const &rhs);

    std::string getName() const;
    int getSign() const;
    int getSignGrade() const;
    int getExecuteGrade() const;

    void beSigned(Bureacrat& bureacrat);
    virtual void execute(Bureacrat const & executor) const = 0;

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char* what () const throw () {
            return "Grade is too high";
        }
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char* what () const throw () {
            return "Grade is too low";
        }
    };

    class FormNotSignedException : public std::exception
    {
    public:
        virtual const char* what () const throw () {
            return "Form isn't signed";
        }
    };
};

std::ostream & operator<<(std::ostream & out, AForm const &src);

#endif
