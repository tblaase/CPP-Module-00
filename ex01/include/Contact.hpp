/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:38:11 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/08 19:53:31 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <iomanip>
#include <string>

class Contact{
	private:
		int					index;
		static std::string	fields_name[5];
		std::string			informations[11];

		enum Field {
			FirstName = 0,
			LastName,
			PhoneNumber,
			Address,
			Email
		};
	public:
		Contact(void);
		~Contact(void);

		bool	set_informations(int index);
		void	_get_informations();
		void	get_informations();
};

#endif