/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:46:13 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/09 20:10:59 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"


int main(void)
{
	PhoneBook 	PhoneBook;
	bool		run = true;
	std::string	command;

	while (run)
	{
		PhoneBook.show_instruction();
		std::cout << "\033[33m$>\033[0m";
		std::getline(std::cin, command);
		if (command == "ADD")
			PhoneBook.set_information();
		else if (command == "SEARCH")
			PhoneBook.get_information();
		else if (command  == "EXIT")
		{
			std::cout << "\033[34mHope i served you well. Good Bye.\033[0m" << std::endl;
			run = false;
		}
	}
	return (0);
}