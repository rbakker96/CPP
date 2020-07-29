/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 11:10:08 by rbakker           #+#    #+#             */
/*   Updated: 2020/07/29 13:16:51 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H
#include <string>

class Contact {

public:

    Contact( void );
    ~Contact( void );

    int             set_contact( int index );
    void            get_contacts( void ) const;
    void            print_contact( std::string output_value ) const;
    void            get_contact_info( void ) const;

private:
    std::string     _first_name;
    std::string     _last_name;
    std::string     _nick_name;
    std::string     _login;
    std::string     _postal_address;
    std::string     _email_address;
    std::string     _phone_number;
    std::string     _birthday_date;
    std::string     _favorite_meal;
    std::string     _underwear_color;
    std::string     _darkest_secret;
};

#endif