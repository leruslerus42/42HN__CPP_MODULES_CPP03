/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:47:49 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/17 23:11:57 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << "Default constructor FragTrap called"<< std::endl;
}

FragTrap::FragTrap(std::string	name)
{
	std::cout << "Overload constructor FragTrap called"<< std::endl;
	this->_name = name;
	this->_health = 100;
	this->_energy = 100;
	this->_attack_dmg = 30;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap	&FragTrap::operator= (const FragTrap & copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Deconstructor FragTrap called"<< std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << this->_name << "Give me one high Five Guys ;-).\n";
}

int	FragTrap::getHealth() const
{
	return (100);
}

int	FragTrap::getAttackDamage() const
{
	return (30);
}
