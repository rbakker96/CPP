/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 10:38:30 by rbakker           #+#    #+#             */
/*   Updated: 2020/07/29 13:41:47 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.class.hpp"

int     main(void)
{
    static int input_index = 1;
    int output_index;
    std::string input ("input");
    Contact contact_info[9];    

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
            input_index = contact_info[input_index].set_contact(input_index);
        else if (input.compare("SEARCH") == 0)
        {    
            std::cout << "     INDEX|" << "FIRST NAME|" << " LAST NAME|" << " NICK NAME|" << std::endl;
            for (output_index = 1; output_index < input_index; output_index++)
            {
                std::cout << "         " << output_index  << "|";
                contact_info[output_index].get_contacts();
                std::cout << '\n';
            }
            std::cout << "Type desired index = ";
            std::cin >> input;
            output_index = std::atoi(input.c_str());
            if( output_index < input_index && output_index > 0)
                contact_info[output_index].get_contact_info();
            else
                std::cout << "I'm sorry this entry doesn't exsist ..." << std::endl;   
        }
    }
    return (0);
}
