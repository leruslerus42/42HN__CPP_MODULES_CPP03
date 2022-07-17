/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:49:30 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/17 23:16:14 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string _name;
		
	public:
		DiamondTrap();
		DiamondTrap(std::string	name);
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap &operator= (const DiamondTrap &copy);
		~DiamondTrap();

		void		setName(std::string name);
		std::string	getName() const;

		void	whoAmI();

};


