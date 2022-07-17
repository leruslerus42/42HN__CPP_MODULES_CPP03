/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 08:58:08 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/17 11:18:33 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ScavTrap.hpp"

int main()
{
	ScavTrap RobotSpecialUnit("ScavTrap");
	RobotSpecialUnit.attack("ClapTrap");
	RobotSpecialUnit.takeDamage(5);
	RobotSpecialUnit.beRepaired(8);
	RobotSpecialUnit.guardGate();
	return (0);
}