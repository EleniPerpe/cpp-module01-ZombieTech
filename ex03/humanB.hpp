/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:43:04 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/15 12:04:42 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

#pragma once

class HumanB
{
private:
	std::string _name;
	Weapon *_weapon;

public:
	HumanB(std::string name);
	~HumanB();

	void attack();
	void setWeapon(Weapon &weapon);
};