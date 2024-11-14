/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:11:37 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/08 17:16:44 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl compainer;
	
	compainer.complain("DEBUG");
	compainer.complain("INFO");
	compainer.complain("WARNING");
	compainer.complain("ERROR");
	compainer.complain("COMPLAIN");
	return (0);
}