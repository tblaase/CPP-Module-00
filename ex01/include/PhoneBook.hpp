/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:51:09 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/08 20:18:31 by tblaase          ###   ########.fr       */
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
		Contact contacts[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	add(void);
		void	search();
		void	exit();
};


#endif