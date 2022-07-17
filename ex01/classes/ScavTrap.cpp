/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 01:24:18 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/17 23:11:32 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "Default constructor ScavTrap called"<< std::endl;
}

ScavTrap::ScavTrap(std::string	name)
{
	std::cout << "Overload constructor ScavTrap called"<< std::endl;
	this->_name = name;
	this->_health = 100;
	this->_energy = 50;
	this->_attack_dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap	&ScavTrap::operator= (const ScavTrap & copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Deconstructor ScavTrap called"<< std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << this->_name << " is now in Gate keeper mode.\n";
}
