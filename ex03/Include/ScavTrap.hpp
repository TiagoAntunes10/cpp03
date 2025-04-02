/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:06:00 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/02 22:10:21 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "./ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const &st );
		ScavTrap &operator= ( ScavTrap const &st );
		~ScavTrap( void );
		void	attack( std::string target );
		void	guardGate( void );

	protected:
		static int	_energyPoints;
		std::string	_name;
};

#endif
