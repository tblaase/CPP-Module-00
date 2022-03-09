/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:51:09 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/09 20:01:26 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CRAPPY_PHONEBOOK_H
#define CRAPPY_PHONEBOOK_H

#include <string>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class PhoneBook{
	private:
		Contact	_contacts[8];
		int		_index;

	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	set_information(void);
		void	get_information(void)const;
		void	show_instruction(void);
};

#endif