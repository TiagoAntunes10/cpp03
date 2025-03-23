/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:06:00 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/23 18:13:53 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "./ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const &st );
	// : ClapTrap(st) {
	// 		*this = st;
	// 		std::cout << "ScavTrap " << _name << ": Copy constructor called" << " (Total health: " << _hitPoints << "; Total energy: " << _energyPoints << ")" << std::endl;
	// 	};
		ScavTrap &operator= ( ScavTrap const &st );
		~ScavTrap( void );
		void	attack( std::string target );
		void	guardGate( void );
};

#endif
