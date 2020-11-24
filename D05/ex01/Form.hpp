/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/24 15:52:29 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/24 15:52:29 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_H
#define FORM_CLASS_H
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureacrat;

class Form
{

private:
    Form();
    const std::string   _name;
    bool                _sign;
    const int           _sign_grade;
    const int           _execute_grade;

public:
    Form(std::string name, int sign_grade, int execute_grade);
    Form(Form const &src);
    ~Form();

    Form & operator=(Form const &rhs);

    std::string getName() const;
    int getSign() const;
    int getSignGrade() const;
    int getExecuteGrade() const;

    void beSigned(Bureacrat& bureacrat);

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
};

std::ostream & operator<<(std::ostream & out, Form const &src);

#endif
