/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschumme <kschumme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 14:37:15 by kschumme          #+#    #+#             */
/*   Updated: 2015/06/15 18:16:42 by kschumme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_CLASS_HPP
# define PHONE_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {

public:
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	login;
	std::string postal_address;
	std::string	email;
	std::string	number;
	std::string	birthday;
	std::string	favorite;
	std::string	meal;
	std::string	UCDS;
	std::string	choice;

	Contact(void);
	~Contact(void);

	void	get_contact(void);
	void	menu(void);
	void	show_contact(void);

private:


};

#endif