/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 10:38:30 by rbakker           #+#    #+#             */
/*   Updated: 2020/07/28 14:34:15 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.class.hpp"

void    search_contact()
{
    std::cout << "SEARCH - You can see all the current contacts of the phonebook" << std::endl;
}

void    add_contact()
{
    std::cout << "ADD - You can add an contact to the phonebook" << std::endl;
}

int     main(void)
{
    static int index = 0;
    std::string input ("input");
    Contact contact_info[8];    

    std::cout << "Welcome to the Golden Guide phonebook!" << std::endl;    
    std::cout << "What would you like to do?" << std::endl << std::endl;
    std::cout << "ADD    - You can add an contact to the phonebook" << std::endl;
    std::cout << "SEARCH - You can see all the current contacts of the phonebook" << std::endl;
    std::cout << "EXIT   - Close the phonebook program" << std::endl << std::endl;
    while (input.compare("EXIT") != 0)
    {
        std::cout << "What would you like to do = ";
        std::cin >> input;
        if (input.compare("ADD") == 0)
            contact_info[index].set_contact(index);
        else if (input.compare("SEARCH") == 0)
            contact_info[0].get_contact();
        else if (input.compare("EXIT") != 0)
            std::cout << "Let me explain one last time you can choose from = ADD - SEARCH - EXIT" << std::endl;
    }
    return (0);
}
