/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschumme <kschumme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 14:37:31 by kschumme          #+#    #+#             */
/*   Updated: 2015/06/15 18:42:11 by kschumme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <iomanip>
#include "Phone.class.hpp"

Contact::Contact(void) {

	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::menu(void) {

	std::cout << "Welcome to the Mothefucking PhoneBook :" << std::endl;
	std::cout << "0 - EXIT" << std::endl
        << "1 - ADD" << std::endl
        << "2 - SEARCH" << std::endl << std::endl
        << "Your choice ?";
        std::getline (std::cin, choice);
    //if (choice == '0')
    //	std::cout << "lol" ;
}

void	Contact::get_contact(void) {

	std::cout << "Enter your first_name: ";
	std::getline (std::cin, first_name);
	std::cout << "first_name:" << first_name << std::endl;
	std::cout << "Enter your last_name:";
	std::getline(std::cin, last_name);
	std::cout << "last_name:" << last_name << std::endl;
	std::cout << "Enter your nick_name: ";
	std::getline(std::cin, nick_name);
	std::cout << "nick_name:" << nick_name << std::endl;
	std::cout << "Enter your login: ";
	std::getline(std::cin, login);
	std::cout << "login:" << login << std::endl;
	std::cout << "Enter your postal_address: ";
	std::getline(std::cin, postal_address);
	std::cout << "postal_address: " << postal_address << std::endl;
	std::cout << "Enter your email: ";
	std::getline(std::cin, email);
	std::cout << "email: " << email << std::endl;
	std::cout << "Enter your number: ";
	std::getline(std::cin, number);
	std::cout << "number: " << number << std::endl;
	std::cout << "Enter your birthday: ";
	std::getline(std::cin, birthday);
	std::cout << "birthday: " << birthday << std::endl;
	std::cout << "Enter your favorite: ";
	std::getline(std::cin, favorite);
	std::cout << "favorite: " << favorite << std::endl;
	std::cout << "Enter your meal: ";
	std::getline(std::cin, meal);
	std::cout << "meal: " << meal << std::endl;
	std::cout << "Enter your underwear color and darkest secret: ";
	std::getline(std::cin, UCDS);
	std::cout << "UCDS: " << UCDS << std::endl;
	std::cout << "Thanks :)" << std::endl;
}

void	Contact::show_contact(void) {

	return ;
}