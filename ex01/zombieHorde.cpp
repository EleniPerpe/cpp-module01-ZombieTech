/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:09:58 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/06 14:03:00 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombiesHorde.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	Zombie *horde = new Zombie[n];

	for (int i = 0; i < n; i++)
		horde[i] = Zombie(name);
		
	return (horde);
}
