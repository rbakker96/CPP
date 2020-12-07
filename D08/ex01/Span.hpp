/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 15:58:44 by rbakker       #+#    #+#                 */
/*   Updated: 2020/12/03 15:58:44 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_H
#define SPAN_CLASS_H
#include <vector>
#include <algorithm>

class Span
{

private:
    Span();
    unsigned int        _size;
    unsigned int        _used;
    std::vector<int>    _vec;

public:
    Span(unsigned int n);
    Span(Span const &src);
    ~Span();

    Span & operator=(Span const &rhs);

    void addNumber(int i);
    int shortestSpan();
    int longestSpan();

    class FullObjectException : public std::exception
    {
    public:
        virtual const char* what () const throw () {
            return "Object is full";
        }
    };

    class NoSpanException : public std::exception
    {
    public:
        virtual const char* what () const throw () {
            return "Not enough numbers to calculate a span";
        }
    };
};

#endif
