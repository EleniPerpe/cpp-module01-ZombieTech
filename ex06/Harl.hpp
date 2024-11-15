/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:37:56 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/15 12:03:38 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#pragma once

class Harl
{
private:
	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error(void);

public:
	Harl();
	~Harl();
	void complain(std::string level);
};