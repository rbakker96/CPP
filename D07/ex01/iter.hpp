/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 10:43:24 by rbakker       #+#    #+#                 */
/*   Updated: 2020/12/03 10:43:24 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_CLASS_H
#define ITER_CLASS_H

template <typename T>
void    iter(T *array, const size_t len, void print(const T& element)) {
    for (size_t i = 0; i < len; i++) {
        print(array[i]);
    }
    std::cout << std::endl;
    return ;
}

template <typename T>
void    print(T& element) {
    std::cout << element << " ";
}

#endif
