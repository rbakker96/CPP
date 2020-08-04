/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakker <rbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 17:32:24 by rbakker           #+#    #+#             */
/*   Updated: 2020/08/04 12:00:58 by rbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_H
#define HUMAN_CLASS_H
#include <string>
#include "Brain.hpp"

class Human {

public:

    Human(void);
    ~Human(void);

    const Brain     &getBrain();
    const Brain     *identify() const;

private:
    const Brain     _my_brain;
};

#endif