/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:08:31 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/10 20:56:26 by tblaase          ###   ########.fr       */
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
		std::string rest;
		std::cout << "Please tell me which contact index i should show you. (0 to quit searching)\nIndex: ";
		while (!(std::cin >> index) || index < 0 || index > this->_index)
		{
			if (std::cin.eof() == true)
			{
				std::cout << "You Pressed ^D. Exiting search mode now." << std::endl;
				return ;
			}
			std::getline(std::cin, rest);
			std::cin.clear();
			// std::cout << "rest is: " << rest << std::endl;
			if (rest.empty() == false)
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "\033[31mOnly digits please.\033[0m\n";
				std::cout << "Please tell me which contact i should show you. (0 to quit searching)\nIndex: ";
			}
			else if (index > this->_index)
			{
				std::cout << "You only have " << this->_index << " Contacts saved." << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Please tell me which contact i should show you.\nIndex: ";
			}
			else
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "\033[31mInvalid index, only 0-7 is valid.\033[0m\n";
				std::cout << "Please tell me which contact i should show you. (0 to quit searching)\nIndex: ";
			}
		}
		if (index > 0)
		{
			std::cout << "|-------------------------------------------|" << std::endl;
			std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
			std::cout << "|----------|----------|----------|----------|" << std::endl;
			// Display contact information, right aligned, truncated if more than 10 characters long to only have 9 characters followed by a '.'
			this->_contacts[index - 1].get_contact();
			std::cout << "|-------------------------------------------|" << std::endl;
		}
		else
			std::cout << "Exiting search mode now." << std::endl;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void	PhoneBook::show_instruction(void)
{
	std::cout << "\033[KEnter your command [ADD, SEARCH, EXIT]:" << std::endl;
}
