/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:34:35 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/08 17:59:00 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

std::string getInput(std::string message)
{
    std::string input;
    std::cout << message;
    if (!std::getline(std::cin, input))
	{
		std::cout << "exit eof\n";
		exit (0);
	}
	return (input);
}

std::string rebuild(std::string str)
{
	std::string	res;

	if (str.length() > 10)
	{
		for (int i = 0; i < 9; ++i) {
            res.push_back(str[i]);
        }
        res.push_back('.');
		return (res);
	}
	return (str);
}	