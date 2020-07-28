/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 11:09:57 by rbakker           #+#    #+#             */
/*   Updated: 2020/07/28 14:47:55 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact( void ) {
    return;
}

void    Contact::set_contact( int index ) 
{
    std::cout << index << std::endl;
    if (index < 8)
    {
        this->input_index = index;
        index++;
        std::cout << "what is your first name = ";
        std::cin >> this->first_name;
        std::cout << "what is your last name = ";
        std::cin >> this->last_name;
        std::cout << "what is your nickname = ";
        std::cin >> this->nickname;
        std::cout << "what is your login = ";
        std::cin >> this->login;
        std::cout << "what is your postal address = ";
        std::cin >> this->postal_address;
        std::cout << "what is your email address = ";
        std::cin >> this->email_address;
        std::cout << "what is your phone number = ";
        std::cin >> this->phone_number;
        std::cout << "what is your birthday date = ";
        std::cin >> this->birthday_date;
        std::cout << "what is your favorite meal = ";
        std::cin >> this->favorite_meal;
        std::cout << "what is your underwear color = ";  
        std::cin >> this->underwear_color;
        std::cout << "what is your darkest secret = ";  
        std::cin >> this->darkest_secret;
    }
    else 
        std::cout << "I'm sorry the phonebook is full ..." << std::endl;
    return;
}

void    Contact::get_contact( void ) const 
{
    std::cout << this->first_name << std::endl;
}

Contact::~Contact( void ) {
    return;
}