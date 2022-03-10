/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:08:31 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/10 10:57:07 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

// void	PhoneBook::set_information(void)
// {
// 	if (this->_index < 7)
// 	{
// 		this->_contacts[this->_index].set_contact(this->_index);
// 		this->_index++;
// 	}
// 	else
// 	{
// 		// delete oldest and push all contacts one number lower
// 		// after that, don't increment _index
// 		this->_index = 7; //only here to not create error msg
// 	}
// }

void	PhoneBook::get_information() const
{
	int	index;

	if (this->_index == 0)
		std::cout << "\033[31mPlease add at least one contact before searching.\033[0m" << std::endl;
	else
	{
		// ask for input of index and check it for 0 <= index >= 7
		// Display error when outside, then prompt again
		// Display contact information, right aligned, truncated if more than 10 characters long to only have 9 characters followed by a '.'
		std::cout << "Please tell me which contact index i should show you."<< std::endl << "Index: ";
		while (!(std::cin >> index) || (index < 0 || index > 8))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\033[31mInvalid index, only 0-7 is valid.\033[0m\n";
			std::cout << "Please tell me which contact index i should show you." << std::endl << "Index: ";
		}
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (index > 0)
			this->_contacts[index - 1].get_contact();
		std::cout << "|-------------------------------------------|" << std::endl;
	}
}

void	PhoneBook::show_instruction(void)//figure out why it is getting printed multiple times
{
	std::cout << "\033[KEnter your command [ADD, SEARCH, EXIT]:" << std::endl;
}
