/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:24:57 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/08 17:56:36 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
	
	PhoneBook phonebook;

	while (1)
	{
		std::cin.eof();
		std::string input = getInput("> ");
		if (input == "ADD")
            phonebook.addContact();
		else if (input == "SEARCH")
            phonebook.searchContact();
		else if (input == "EXIT")
			break ;
	}
}