/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:37:21 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/08 17:41:33 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
	std::cout << "This is the Contact Constructor" << std::endl;
	return;
}

Contact::~Contact()
{
	std::cout << "This is the Contact Destructor" << std::endl;
	return;
}