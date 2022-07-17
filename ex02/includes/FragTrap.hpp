/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:23:43 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/17 23:16:05 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef __FRAGTRAP__H__
#define __FRAGTRAP__H__

class FragTrap : public ClapTrap {
	private:

	public:
		FragTrap();
		FragTrap(std::string	name);
		FragTrap(const FragTrap &copy);
		FragTrap &operator= (const FragTrap &copy);
		~FragTrap();

		void highFivesGuys(void);
};


#endif  //!__SCAVTRAP__H__
