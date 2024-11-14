/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:36:27 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/08 18:39:56 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int switch_prep(std::string string);

int main(int argc, char **argv)
{
	Harl kitty;

	if (argc != 2)
	{
		std::cout << "<./executable name> complain" << std::endl;
		return 1;
	}
	std::string argument = argv[1];
	switch(switch_prep(argv[1]))
	{
		case 0:
			kitty.complain("DEBUG");
		case 1:
			kitty.complain("INFO");
		case 2:
			kitty.complain("WARNING");
		case 3:
			kitty.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return 0;
}

int switch_prep(std::string string)
{
	if (string.compare("DEBUG") == 0)
		return 0;
	if (string.compare("INFO") == 0)
		return 1;
	if (string.compare("WARNING") == 0)
		return 2;
	if (string.compare("ERROR") == 0)
		return 3;
	return 4;
}