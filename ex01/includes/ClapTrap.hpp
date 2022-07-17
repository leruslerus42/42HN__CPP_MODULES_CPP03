/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:41:28 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/17 11:23:04 by rrajaobe         ###   ########.fr       */
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

};


#endif  //!__CLAPTRAP__H__