/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:22:29 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/05 14:57:49 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon()
{	
}

void Weapon::setType(std::string type)
{
	_type = type;
}

const std::string &Weapon::getType()
{
	return(_type);
}