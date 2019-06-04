/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:22:33 by kmashao           #+#    #+#             */
/*   Updated: 2019/06/04 16:22:36 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void){}

void PhoneBook::add(){
	std::cout<<"First Name: ";
	std::getline(std::cin, this->_firstName);

	std::cout<<"Last Name: ";
	std::getline(std::cin, this->_lastName);

	std::cout<<"Nickname: ";
	std::getline(std::cin, this->_nickName);

	std::cout<<"Login: ";
	std::getline(std::cin, this->_login);

	std::cout<<"Postal address: ";
	std::getline(std::cin, this->_postalAddress);

	std::cout<<"Email address: ";
	std::getline(std::cin, this->_email);

	std::cout<<"Phone number: ";
	std::getline(std::cin, this->_phoneNum);

	std::cout<<"Birthday date: ";
	std::getline(std::cin, this->_birthday);

	std::cout<<"Favourite meal: ";
	std::getline(std::cin, this->_favMeal);

	std::cout<<"Underwear colour: ";
	std::getline(std::cin, this->_underwearCol);

	std::cout<<"Darkest secret: ";
	std::getline(std::cin, this->_darkSecret);
}

void PhoneBook::search(){

}


PhoneBook::~PhoneBook(void){}
