/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:47:35 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/17 23:16:23 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef __FRAGTRAP__H__
#define __FRAGTRAP__H__

class FragTrap : virtual public ClapTrap {
	private:

	public:
		FragTrap();
		FragTrap(std::string	name);
		FragTrap(const FragTrap &copy);
		FragTrap &operator= (const FragTrap &copy);
		~FragTrap();

		void highFivesGuys(void);
		int	getHealth() const;
		int	getAttackDamage() const;
};


#endif  //!__SCAVTRAP__H__
