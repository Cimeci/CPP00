/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 08:05:18 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/06 15:21:39 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : total_contact(0), i(0) {}

void PhoneBook::addContact()
{
	if (i == 8)
		i = 0;

	std::string first_name = getInput("First_name : ");
	std::string last_name = getInput("Last_name : ");
	std::string nickname = getInput("Nickname : ");
	std::string phone_number ;
	while (1) {
		phone_number = getInput("Phone_number : ");
		int l = 0;
		while (isspace(phone_number[l]))
		l++;
		size_t j = l;
		if (phone_number[j] == '+')
		j++;
		size_t k = j;
		while (j < phone_number.length()) {
			if (isdigit(phone_number[j]) || isspace(phone_number[j]))
				k++;
			j++;
		}
		if (k == j)
			break ;
		else
			std::cout << RED <<"Error : " << ORANGE << "invalid input\n" << YELLOW << "Retry (STOP to stop the request)\n" << RESET;
	}
	std::string dark_secret = getInput("Dark_secret : ");
	
	contacts[i].add(first_name, last_name, nickname, phone_number, dark_secret, i);
	i++;
	if (total_contact < 8)
		total_contact++;
}

void PhoneBook::searchContact()
{
	if (total_contact == 0)
		std::cout << "No contact register\n";

	std::cout << BLUE << "--------------------------------------------\n" << RESET;
	contacts[0].header();
		for (int j = 0; j < total_contact; j++) {
			contacts[j].print();
		}
		std::cout << BLUE << "--------------------------------------------\n" << RESET;
		while (1)
		{
			std::string index;
			index = getInput("Index Contact: ");
			std::istringstream iss(index);
			
			int idx;
			if (index == "STOP")
				break ;
			if (!(iss >> idx))
				std::cout << RED <<"Error : " << ORANGE << "invalid input\n" << YELLOW << "Retry (STOP to stop the request)\n" << RESET;
			
			else if (idx < 0 || idx >= total_contact)
				std::cout << RED <<"Error : " << ORANGE << "index doesn't exist\n" << YELLOW << "Retry (STOP to stop the request)\n" << RESET;

			else {
				contacts[idx].search();
				break;
			}
		}
}

