/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:32:56 by kmashao           #+#    #+#             */
/*   Updated: 2019/06/04 17:32:59 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>
#include <iomanip>

int main(void)
{
    PhoneBook contact[8];
    int index = 0;
    std::string command;

    while (true)
    {

        std::cout << "Enter command: ";
        std::getline(std::cin, command);
        if (std::cin.eof())
            break;
        for (int i = 0; command[i] != 0; i++)
            command[i] = toupper(command[i]);
        if (command == "ADD"){
            if (index == 8){
                std::cout << "Phonebook is full."<<std::endl;
                continue;
            }
            contact[index].add();
            index++;
        }
        else if(command == "SEARCH"){
            if (index == 0){
                std::cout << "Phonebook is empty." << std::endl;
                continue;
            }
            for (int i = 0; i < index; i++){
                std::cout << std::setw(10) << i << "|";
                contact[i].search();
            }
        }
        else if (command == "EXIT")
            break;
        else
            continue;    
    }
    return (0);
}
