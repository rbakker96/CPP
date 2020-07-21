/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 17:41:49 by roybakker     #+#    #+#                 */
/*   Updated: 2020/07/21 17:51:20 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int     main(int argv, char **argc)
{
    int current_arg;
    unsigned long int index;
    std::string text;

    if (argv == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        for (current_arg = 1; current_arg != argv; current_arg++)
        {
            text = argc[current_arg];
            for (index = 0; index < text.length(); index++)
            {
                text[index] = toupper(text[index]);
            }
            std::cout << text;
        }
    std::cout << '\n';
    return (0);
}
