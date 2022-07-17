/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:47:39 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/17 23:15:33 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef __CLAPTRAP__H__
#define __CLAPTRAP__H__

class ClapTrap {
	protected:
		std::string	_name;
		int 		_health;
		int 		_energy;
		int 		_attack_dmg;
		
	public:
		/*CONSTRUCTORS & DECONSTRUCTOR*/
		ClapTrap();
		ClapTrap(std::string	name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator= (const ClapTrap &copy);
		~ClapTrap();
		
		/*ACTIONS*/
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		/*UTILS*/
		void	stats();
		bool	energyCheck();

		/*GETTER - SETTER*/
		void	setName(std::string name);
		std::string	getName() const;

};


#endif  //!__CLAPTRAP__H__