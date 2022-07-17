/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:47:24 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/17 23:17:27 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DIAMOND PROBLEM
A child class D ihnerited from 2 upperclassese B and C, that will ihnerited both from a single grandparent class A (Constructor from A will be called 2 times):
	A
B		C
	D
Here we have used the virtual keyword when classes B and C
 inherit the Person class. This is usually called “virtual inheritance," which guarantees that only a single instance of the inherited class A is passed on.
*/

#include "./includes/DiamondTrap.hpp"

int main()
{
	DiamondTrap TrapMonster("DiamondTrap");
	
	TrapMonster.ScavTrap::attack("Robot");
	//TrapMonster.whoAmI();

	return (0);
}