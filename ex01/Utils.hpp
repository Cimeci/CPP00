/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:35:18 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/06 14:37:31 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# define RED "\033[1;31m"
# define ORANGE "\033[38;5;214m"
# define YELLOW "\033[1;33m"
# define PURPLE "\033[1;35m"
# define BLUE   "\033[1;34m"
# define RESET "\033[0m"

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>
# include <cstdlib>

std::string getInput(std::string message);
std::string rebuild(std::string str);

#endif