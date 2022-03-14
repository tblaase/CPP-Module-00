/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:08:31 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/14 15:42:36 by tblaase          ###   ########.fr       */
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

void	PhoneBook::set_information(void)
{
	if (this->_index < 7)
	{
		this->_contacts[this->_index].set_contact(this->_index);
		this->_index++;
	}
	else
	{
		for (int i = 1; i < 8; i++)
			this->_contacts[i - 1] = this->_contacts[i];
		this->_contacts[this->_index].set_contact(this->_index);
	}
}

void	PhoneBook::get_information() const
{
	int	index;

	if (this->_index == 0)
		std::cout << "\033[31mPlease add at least one contact before searching.\033[0m" << std::endl;
	else
	{
		std::string input;
		std::cout << "Please tell me which contact index i should show you. (0 to quit searching)\nIndex: ";
		while (!(std::getline(std::cin, input)) || input.length() > 1 || input.compare("0") < 0 || input.compare("8") > 0 || std::atoi(input.c_str()) > this->_index)
		{
			if (std::cin.eof() == true)
			{
				std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
				exit(0);
			}
			else if (input.length() > 1 || input.compare("0") < 0 || input.compare("8") > 0)
			{
				std::cin.clear();
				std::cout << "\033[31mOnly digits in range of 1 to 8 are allowed.\033[0m\n";
				std::cout << "Please tell me which contact i should show you. (0 to quit searching)\nIndex: ";
			}
			else if (std::atoi(input.c_str()) > this->_index)
			{
				std::cout << "\033[33mYou only have " << this->_index << " Contacts saved.\033[0m" << std::endl;
				std::cin.clear();
				std::cout << "Please tell me which contact i should show you. (0 to quit searching)\nIndex: ";
			}
		}
		index = std::atoi(input.c_str());
		// std::cout << "DEBUG this->_index: " << this->_index << std::endl;
		// std::cout << "DEBUG index: " << index << std::endl;
		if (index > 0)
		{
			std::cout << "|-------------------------------------------|" << std::endl;
			std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
			std::cout << "|----------|----------|----------|----------|" << std::endl;
			this->_contacts[index - 1].get_contact();
			std::cout << "|-------------------------------------------|" << std::endl;
		}
		else
			std::cout << "Exiting search mode now." << std::endl;
	}
}

void	PhoneBook::show_instruction(void)
{
	std::cout << "\033[KEnter your command [ADD, SEARCH, EXIT]:" << std::endl;
}
