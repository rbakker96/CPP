/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 11:10:08 by rbakker           #+#    #+#             */
/*   Updated: 2020/07/28 14:32:53 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H
#include <string>

class Contact {

public:

    Contact( void );
    ~Contact( void );

    void    set_contact( int index );
    void    get_contact( void ) const;

private:
    int             input_index;
    std::string     first_name;
    std::string     last_name;
    std::string     nickname;
    std::string     login;
    std::string     postal_address;
    std::string     email_address;
    std::string     phone_number;
    std::string     birthday_date;
    std::string     favorite_meal;
    std::string     underwear_color;
    std::string     darkest_secret;

};

#endif