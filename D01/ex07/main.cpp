/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 15:24:32 by rbakker           #+#    #+#             */
/*   Updated: 2020/08/04 17:40:18 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <array>

void    error_handeling(int error_code)
{
    std::array<std::string, 3> error_messages;
    error_messages[0] = "Wrong amount of arguments";
    error_messages[1] = "Couldn't open chosen file";
    error_messages[2] = "Couldn't open new file";

    std::cout << error_messages[error_code] << std::endl;
    exit (1);
}   

int     main(int argc, char **argv)
{
    if (argc != 4)
        error_handeling(0);
    
    std::string     buffer;
    std::string     filename = argv[1];
    std::string     s1       = argv[2];
    std::string     s2       = argv[3];    

 
    std::ifstream   reading;
    reading.open(argv[1]);
    if (reading.fail())
        error_handeling(1);

    std::ofstream   writing;
    writing.open(filename.append(".replace"));
    if (writing.fail())
        error_handeling(2);

    while (std::getline(reading, buffer))
    {  
        std::cout << "test" << std::endl;
        if (buffer.find(s1)< buffer.length())
            buffer.replace(buffer.find(s1) , s1.length(), s2);
        if (reading.eof())
            writing << buffer;
        else
            writing << buffer << std::endl;
    }
    reading.close();
    writing.close();
}