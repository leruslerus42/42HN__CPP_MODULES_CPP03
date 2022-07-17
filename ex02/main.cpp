/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:23:48 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/17 11:36:19 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/FragTrap.hpp"

int main()
{
	FragTrap RobotSpecialUnit("FragTrap");
	RobotSpecialUnit.attack("ClapTrap");
	RobotSpecialUnit.takeDamage(5);
	RobotSpecialUnit.beRepaired(8);
	RobotSpecialUnit.highFivesGuys();
	return (0);
}