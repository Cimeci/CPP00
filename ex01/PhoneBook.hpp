/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 08:28:49 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/06 14:37:50 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "Utils.hpp"
	
class PhoneBook {
	
	private:
		Contact contacts[8];
		int total_contact;
		int i;
		
	public:
		PhoneBook ();
		void addContact();
		void searchContact();
};

#endif