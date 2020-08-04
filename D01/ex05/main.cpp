/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 17:32:34 by rbakker           #+#    #+#             */
/*   Updated: 2020/08/04 12:01:46 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Human.hpp"

int main()
{
    Human bob;
    
    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;
}