/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   scalar.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 16:34:14 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/27 16:34:14 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CLASS_H
#define SCALAR_CLASS_H
#include <string>

class Scalar
{

public:
    Scalar();
    Scalar(Scalar const &src);
    ~Scalar();

    Scalar & operator=(Scalar const &rhs);
};

#endif
