/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:01:41 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/06 14:07:22 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombiesHorde.hpp"

int main(void)
{
	int num = 3;
	Zombie *horde;
	
	horde = zombieHorde(num, "Foo");
	for (int i = 0; i < num; i++)
	{
		std::cout << "Index" << i << ": ";
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}