/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/05 15:07:50 by roybakker     #+#    #+#                 */
/*   Updated: 2020/12/05 15:07:50 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_CLASS_H
#define WHATEVER_CLASS_H

template <typename T>
void    swap(T& first, T& second) {
    T tmp = first;
    first = second;
    second = tmp;
    return ;
}

//should be const in my opinion
template <typename T>
T    min(T& first, T& second) {
    return((first < second) ? first : second);
}

//should be const in my opinion
template <typename T>
T    max(T& first, T& second) {
    return((first > second) ? first : second);
}

#endif
