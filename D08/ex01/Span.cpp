/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 15:59:09 by rbakker       #+#    #+#                 */
/*   Updated: 2020/12/03 15:59:09 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span() {}

Span::Span(unsigned int n) : _size(n), _used(0) {}

Span::Span(Span const &src) {
    *this = src;
}

Span &		Span::operator=(Span const &rhs) {
    if (this != &rhs) {
        this->_size = rhs._size;
        this->_used = rhs._used;
        this->_vec = rhs._vec;
    }
    return (*this);
}

void    Span::addNumber(int i) {
    if (_used == _size)
        throw FullObjectException();
    else {
        _used += 1;
        _vec.push_back(i);
    }
}

int     Span::shortestSpan() {
    if (_used == 0 || _used == 1)
        throw NoSpanException();
    std::sort(_vec.begin(), _vec.end());
    int span = _vec[1] - _vec[0];

    return (span);
}

int     Span::longestSpan() {
    if (_used == 0 || _used == 1)
        throw NoSpanException();
    std::sort(_vec.begin(), _vec.end());
    int span = _vec[(_used - 1)] - _vec[0];

    return (span);
}

Span::~Span() {}