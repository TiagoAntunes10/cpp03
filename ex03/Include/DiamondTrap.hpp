/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:19:18 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/25 21:54:53 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "./FragTrap.hpp"
# include "./ScavTrap.hpp"

class DiamondTrap: public ScavTrap, FragTrap {
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const &dt );
		DiamondTrap &operator= ( DiamondTrap const &dt );
		~DiamondTrap( void );
		void	attack( std::string target );
		void	whoAmI();

	private:
		std::string	_name;
};

#endif
