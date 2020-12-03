/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 11:41:36 by rbakker       #+#    #+#                 */
/*   Updated: 2020/12/03 11:41:36 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_H
#define ARRAY_CLASS_H
#include <string>

template <typename T>
class Array
{

private:
    unsigned int    _n;
    T               *_array;

public:
    Array() : _n(0), _array(new T[0]) {};
    Array(unsigned int n) : _n(n), _array(new T[n]) {};
    ~Array(){};

    Array(Array const &src) {
        _n = src._n;
        _array = new T[_n];
        for (unsigned int i = 0; i < _n; i++)
            _array[i] = src._array[i];
    };

    Array & operator=(Array const &rhs) {
        if (_array)
            delete [] _array;
        _n = rhs._n;
        _array = new T[_n];
        for (unsigned int i = 0; i < _n; i++)
            _array[i] = rhs._array[i];
        return (*this);
    };

    T & operator[](const unsigned int index) {
        if (index >= _n)
            throw OutOfRangeException();
        return(_array[index]);
    };

    size_t size() const {return (_n);};

    class OutOfRangeException : public std::exception
    {
    public:
        virtual const char* what () const throw () {
            return "Index is out of range";
        }
    };

};

#endif
