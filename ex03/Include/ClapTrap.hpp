/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 22:14:09 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/23 18:02:14 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		~ClapTrap( void );
		ClapTrap( ClapTrap const &ct );
		ClapTrap	&operator=( ClapTrap const &ct );
		void	attack( const std::string &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_atkDamage;
};

#endif
