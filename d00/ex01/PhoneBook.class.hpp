/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:22:43 by kmashao           #+#    #+#             */
/*   Updated: 2019/06/04 16:22:45 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class PhoneBook
{

public:
    PhoneBook::PhoneBook(void);
    PhoneBook::~PhoneBook(void);

    void add();
    void search();

    static int inst_n;

    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _login;
    std::string _postalAddress;
    std::string _email;
    std::string _phoneNum;
    std::string _birthday;
    std::string _favMeal;
    std::string _underwearCol;
    std::string _darkSecret;
};

#endif
