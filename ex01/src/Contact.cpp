/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:37:21 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/09 20:00:17 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
	// std::cout << "This is the Contact Constructor" << std::endl;
	return;
}

Contact::~Contact()
{
	// std::cout << "This is the Contact Destructor" << std::endl;
	return;
}

bool	Contact::set_contact(int index)//maybe void instead
{
	this->_index = index;
	std::cout << "here should be the set_contact of " << index << std::endl;
	std::cout << "\033[32mContact added successfully.\033[0m" << std::endl;
	return (true);
}

void	Contact::get_contact() const
{
	std::cout << "here should be the contact infos from get_contact" << std::endl;
}