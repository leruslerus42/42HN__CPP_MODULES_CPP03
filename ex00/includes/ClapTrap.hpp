/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 08:59:17 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/15 09:04:20 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef __CLAPTRAP__H__
#define __CLAPTRAP__H__

class ClapTrap {
	private:
		std::string	name;
		int health = 10;
		int energy = 10;
		int attack_dmg = 0;
		
	public:
		ClapTrap();
		~Claptrap();

		void	attack(const std::string& target);
		void	takeDamag(unsigned int amount);
		void	beRepaired(unsigned int amount);
}


#endif  //!__CLAPTRAP__H__