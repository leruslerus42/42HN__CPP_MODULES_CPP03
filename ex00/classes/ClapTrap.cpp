/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 08:57:52 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/17 10:52:24 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Default constructor called"<< std::endl;

}

ClapTrap::ClapTrap(std::string	name)
{
	std::cout << "Overload constructor called"<< std::endl;
	this->_name = name;
	this->_health = 10;
	this->_energy = 10;
	this->_attack_dmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap	&ClapTrap::operator= (const ClapTrap & copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructor called"<< std::endl;
}


void	ClapTrap::attack(const std::string& target)
{
	//When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
	this->_energy --;
	std::cout << "************************************************" << std::endl;
	std::cout << this->_name << " attacks " << target << " causing " << this->_attack_dmg << " points of damage!" << std::endl;
	std::cout << "This action will cost 1 Energy Point." << std::endl;
	stats();
}


void	ClapTrap::beRepaired(unsigned int amount)
{
	if(energyCheck())
	{
		std::cout << "************************************************" << std::endl;
		std::cout << this->_name << " will repair himself by " << (int)amount << " points." << std::endl;
		std::cout << "This action will cost 1 Energy Point." << std::endl;
	
		this->_energy--;
		while (amount--)
			this->_health ++;
	}
	else
		std::cout << "Action not possible." << this->_name << " do not have any Enegy points left." << std::endl;

	stats();
}


void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "************************************************" << std::endl;
	std::cout << this->_name << " has taken " << (int) amount << " damage points." << std::endl;
	while (amount--)
		this->_health --;
	if (this->_health < 1)
	{
		std::cout << this->_name << " R.I.P." << std::endl;
		return ;
	}
	stats();
}



/*UTILS*/
bool ClapTrap::energyCheck()
{
	return (this->_energy > 0 ? true : false);
}

void	ClapTrap::stats()
{
	std::cout << "************************************************" << std::endl;
	std::cout << this->_name << " Health: " << this->_health << std::endl;
	std::cout << this->_name << " Energy: " << this->_energy << std::endl;
	std::cout << this->_name << " Attack Damage: " << this->_attack_dmg << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
}
