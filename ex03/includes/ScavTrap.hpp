/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:47:29 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/17 23:16:32 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef __SCAVTRAP__H__
#define __SCAVTRAP__H__

class ScavTrap : virtual public ClapTrap {
	private:

	public:
		ScavTrap();
		ScavTrap(std::string	name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator= (const ScavTrap &copy);
		~ScavTrap();

		int	getEnergy() const;
		void guardGate();
};


#endif  //!__SCAVTRAP__H__
