/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   scalar.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 16:34:23 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/27 16:34:23 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

Scalar::Scalar()
{

}

Scalar::Scalar(Scalar const &src)
{
    *this = src;
}

Scalar &		Scalar::operator=(Scalar const &rhs)
{
    if (this != &rhs)
        this->_grade = rhs._grade;
    return (*this);
}

Scalar::~Scalar()
{

}
