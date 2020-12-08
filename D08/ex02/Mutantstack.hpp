/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 16:00:16 by rbakker       #+#    #+#                 */
/*   Updated: 2020/12/03 16:00:16 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_H
#define MUTANTSTACK_CLASS_H
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

public:
    MutantStack(){};
    MutantStack(MutantStack const &src){ *this = src; };
    ~MutantStack(){};

    MutantStack & operator=(MutantStack const &rhs){
        if (this != rhs)
            this->c = rhs.c;
        return (*this);
    };

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator                begin (){ return (this->c.begin()); };
    iterator                end() { return (this->c.end()); };

    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    const_iterator          begin() const { return (this->c.begin()); };
    const_iterator          end() const { return (this->c.end()); };

    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    reverse_iterator        rbegin() { return (this->c.rbegin()); };
    reverse_iterator        rend() { return (this->c.rend()); };

    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
    const_reverse_iterator  rbegin() const { return (this->c.rbegin()); };
    const_reverse_iterator  rend() const { return (this->c.rend()); };
};

#endif
