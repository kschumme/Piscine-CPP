/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschumme <kschumme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 15:09:03 by kschumme          #+#    #+#             */
/*   Updated: 2015/06/15 17:48:17 by kschumme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>

int		main(void)
{
	Contact instance;

	instance.menu();
	instance.get_contact();
	instance.show_contact();
}