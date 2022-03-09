/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:38:11 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/09 19:42:52 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <iomanip>
#include <string>

class Contact{
	private:
		int					_index;
		static std::string	_fields_name[5];
		std::string			_informations[11];

		enum Field {
			FirstName = 0,
			LastName,
			NickName,
			PhoneNumber,
			DarkestSecret
		};
	public:
		Contact(void);
		~Contact(void);

		bool	set_contact(int index); //maybe void
		void	get_contact()const;
};

#endif