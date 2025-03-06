/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:24:57 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/06 14:39:03 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
	
	PhoneBook PhoneBook;

	while (1)
	{
		std::cin.eof();
		std::string input = getInput("> ");
		if (input == "ADD")
            PhoneBook.addContact();
		else if (input == "SEARCH")
            PhoneBook.searchContact();
		else if (input == "EXIT")
			break ;
	}
}