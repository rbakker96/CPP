/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 15:58:50 by rbakker       #+#    #+#                 */
/*   Updated: 2020/12/03 15:58:50 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Mutantstack.hpp"
#include <iostream>

void subject_test () {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
//[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
}

void own_test() {
    MutantStack<int> mystack;

    // fill the mutantstack
    mystack.push(11);
    mystack.push(22);
    mystack.push(33);
    mystack.push(44);
    mystack.push(55);

    std::cout << "iterator" << std::endl;
    MutantStack<int>::iterator it = mystack.begin();
    MutantStack<int>::iterator ite = mystack.end();
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << std::endl;

    std::cout << "reverse iterator" << std::endl;
    MutantStack<int>::reverse_iterator rit = mystack.rbegin();
    MutantStack<int>::reverse_iterator rite = mystack.rend();
    while (rit != rite) {
        std::cout << *rit << std::endl;
        *rit = 777; //and not const so why not change it
        ++rit;
    }
    std::cout << std::endl;

    std::cout << "const iterator" << std::endl;
    MutantStack<int>::const_iterator cit = mystack.begin();
    MutantStack<int>::const_iterator cite = mystack.end();
    while (cit != cite) {
        std::cout << *cit << std::endl;
        //*cit = 123; // not possible because it's const
        ++cit;
    }
    std::cout << std::endl;
}


int main() {
    std::cout << "\e[1;32mSUBJECT TEST\e[0m\n";
    subject_test();

    std::cout << std::endl << "\e[1;32mOWN TEST\e[0m\n";
    own_test();

    return 0;
}