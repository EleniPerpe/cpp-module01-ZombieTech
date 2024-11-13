/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombiesHorde.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:03:25 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/13 16:07:09 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <new>

#ifndef ZOMBIESHORDE_HPP
#define ZOMBIESHORDE_HPP

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		
		void announce();
		void setName(std::string);
};

Zombie *zombieHorde(int n, std::string name);

#endif