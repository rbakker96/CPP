/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 17:24:04 by rbakker           #+#    #+#             */
/*   Updated: 2020/08/03 17:30:18 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int     main(void)
{
    std::string     welcome = "HI THIS IS BRIAN";
    std::string     *pointer = &welcome;
    std::string     &reference = welcome;

    std::cout << "This is the pointer = " << *pointer << std::endl;
    std::cout << "This is the reference = " << reference << std::endl;
    
    return (0);
}