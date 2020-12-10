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

void    Span::addNumber(std::vector<int> input_vector) {
    if ((input_vector.size() + _vec.size()) > _size)
        throw FullObjectException();
    else
        _used = input_vector.size() + _vec.size();
    std::vector<int> new_vec(_vec);
    new_vec.insert(new_vec.end(), input_vector.begin(), input_vector.end());
    _vec = new_vec;
}

int     Span::shortestSpan() {
    int span = INT_MAX;
    if (_used == 0 || _used == 1)
        throw NoSpanException();
    std::sort(_vec.begin(), _vec.end());
    for (unsigned int i = 1; i < _used; i++)
        if (_vec[i] - _vec[i - 1] < span)
            span = _vec[i] - _vec[i - 1];

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