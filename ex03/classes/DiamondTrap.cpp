/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:49:13 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/17 23:12:35 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	std::cout << "Default constructor DiamondTrap called"<< std::endl;
}

DiamondTrap::DiamondTrap(std::string	name)
{
	std::cout << "Overload constructor DiamondTrap called"<< std::endl;
	this->_name = name;
	this->ClapTrap::setName(this->getName().append("_clap_trap"));
	this->_health = FragTrap::getHealth();
	this->_energy = ScavTrap::getEnergy();
	this->_attack_dmg = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

DiamondTrap	&DiamondTrap::operator= (const DiamondTrap & copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Deconstructor DiamondTrap called"<< std::endl;
}

void	DiamondTrap::setName(std::string name)
{
	this->_name = name;
}

std::string	DiamondTrap::getName() const
{
	return (this->_name);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "************************************************" << std::endl;
	std::cout << "My name is :		  " << this->_name << std::endl;
	std::cout << "My grand parent name is : "<< this->ClapTrap::_name << std::endl;
	std::cout << "************************************************" << std::endl;
}

