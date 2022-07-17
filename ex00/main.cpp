/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 23:08:03 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/17 23:08:06 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ClapTrap.hpp"

int main()
{
	ClapTrap Robot("Robot");
	Robot.attack("Alien");
	Robot.takeDamage(5);
	Robot.beRepaired(8);
	return (0);
}