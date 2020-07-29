/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 11:09:57 by rbakker           #+#    #+#             */
/*   Updated: 2020/07/29 13:28:10 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact( void ) {
    return;
}

int    Contact::set_contact( int input_index ) 
{
    if (input_index < 9)
    {
        input_index++;
        std::cout << "what is your first name = ";
        std::cin >> this->_first_name;
        std::cout << "what is your last name = ";
        std::cin >> this->_last_name;
        std::cout << "what is your nickname = ";
        std::cin >> this->_nick_name;
        std::cout << "what is your login = ";
        std::cin >> this->_login;
        std::cout << "what is your postal address = ";
        std::cin >> this->_postal_address;
        std::cout << "what is your email address = ";
        std::cin >> this->_email_address;
        std::cout << "what is your phone number = ";
        std::cin >> this->_phone_number;
        std::cout << "what is your birthday date = ";
        std::cin >> this->_birthday_date;
        std::cout << "what is your favorite meal = ";
        std::cin >> this->_favorite_meal;
        std::cout << "what is your underwear color = ";  
        std::cin >> this->_underwear_color;
        std::cout << "what is your darkest secret = ";  
        std::cin >> this->_darkest_secret;
    }
    else 
        std::cout << "I'm sorry the phonebook is full ..." << std::endl;
    return input_index;
}

void   Contact::get_contacts( void ) const 
{
    print_contact(this->_first_name);
    print_contact(this->_last_name);
    print_contact(this->_nick_name);
}


void    Contact::print_contact( std::string output_value ) const
{
    if (output_value.length() > 10)
    {
        output_value.at(9) = '.';
        output_value.resize(10);
    }
    else
        for (int i = (int)output_value.length(); i < 10; i++)
            std::cout << " ";
    std::cout << output_value << "|";
    return;
}

void    Contact::get_contact_info( void ) const 
{
    std::cout << "First name = " << this->_first_name << std::endl;
    std::cout << "Last name = " << this->_last_name << std::endl;
    std::cout << "Nickname = " << this->_nick_name << std::endl;
    std::cout << "Login = " << this->_login << std::endl;
    std::cout << "Postal address = " << this->_postal_address << std::endl;
    std::cout << "Email address = " << this->_email_address << std::endl;
    std::cout << "Phone number = " << this->_phone_number << std::endl;
    std::cout << "Birthday date = " << this->_birthday_date << std::endl;
    std::cout << "Favorite meal = " << this->_favorite_meal << std::endl;
    std::cout << "Underwear color = " << this->_underwear_color << std::endl;
    std::cout << "Darkest secret = " << this->_darkest_secret << std::endl;
}

Contact::~Contact( void ) {
    return;
}