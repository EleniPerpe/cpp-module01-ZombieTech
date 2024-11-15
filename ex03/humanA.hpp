/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:28:31 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/15 12:04:37 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "weapon.hpp"

#pragma once

class HumanA
{
private:
	std::string _name;
	Weapon &_weapon;
public:
	
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void attack();
		
};
