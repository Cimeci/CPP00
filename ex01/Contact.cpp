/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:14:40 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/06 15:23:37 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::add(std::string f, std::string l, std::string n, std::string p, std::string d, int i)
{
    index = i;
    first_name = f;
    last_name = l;
    nickname = n;
    phone_number = p;
    dark_secret = d;
}

void Contact::header()
{
    std::cout << std::setw(10) << "index" << "|"
              << std::setw(10) << "first_name" << "|"
              << std::setw(10) << "last_name" << "|"
              << std::setw(10) << "nickname" << std::endl;

    std::cout << BLUE << std::setw(10) << "-----------" 
              << std::setw(10) << "-----------" 
              << std::setw(10) << "-----------" 
              << std::setw(10) << "-----------" << RESET << std::endl;
}

void Contact::print()
{
    std::cout << std::setw(10) << index << "|"
              << std::setw(10) << rebuild(first_name) << "|"
              << std::setw(10) << rebuild(last_name) << "|"
              << std::setw(10) << rebuild(nickname) << std::endl;
}

void Contact::search()
{
    std::cout << PURPLE << "--------------- " << index << " --------------\n" << RESET;
    std::cout << "- First_name   : " << first_name << std::endl;
    std::cout << "- Last_name    : " << last_name << std::endl;
    std::cout << "- Nickname     : " << nickname << std::endl;
    std::cout << "- Phone_number : " << phone_number << std::endl;
    std::cout << "- Dark_secret  : " << dark_secret << std::endl;
    std::cout << PURPLE << "--------------------------------\n" << RESET;
}