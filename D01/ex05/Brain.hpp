/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 17:32:01 by rbakker           #+#    #+#             */
/*   Updated: 2020/08/04 11:53:48 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_H
#define BRAIN_CLASS_H
#include <string>

class Brain {

public:

    Brain(void);
    ~Brain(void);

    const Brain     *identify() const;

private:
     

};

#endif