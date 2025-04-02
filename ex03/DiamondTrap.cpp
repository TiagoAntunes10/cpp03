/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:34:11 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/02 22:16:15 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/include.hpp"

DiamondTrap::DiamondTrap( void ) : ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap default constructor called"
		<< " (Total health: "
		<< _hitPoints
		<< "; Total energy: "
		<< _energyPoints
		<< ")"
		<< std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	_name = name;

	std::cout << "DiamondTrap "
		<< _name
		<< ": String constructor called"
		<< " (Total health: "
		<< _hitPoints
		<< "; Total energy: "
		<< _energyPoints
		<< ")"
		<< std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const &dt ) : ClapTrap(dt), ScavTrap(dt), FragTrap(dt) {
	_name = dt._name;

	std::cout << "DiamondTrap "
		<< _name
		<< ": Copy constructor called"
		<< " (Total health: "
		<< _hitPoints
		<< "; Total energy: "
		<< _energyPoints
		<< ")"
		<< std::endl;
}

DiamondTrap &DiamondTrap::operator= ( DiamondTrap const &dt ) {
	_name = dt._name;

	ScavTrap::operator= (dt);
	FragTrap::operator= (dt);

	std::cout << "DiamondTrap "
		<< _name
		<< ": Copy assignment operator called"
		<< " (Total health: "
		<< _hitPoints
		<< "; Total energy: "
		<< _energyPoints
		<< ")"
		<< std::endl;
	
	return (*this);
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap " << _name << ": Destructor called" << std::endl;
}

void	DiamondTrap::attack( std::string target ) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << _name
		<< " or "
		<< ClapTrap::_name
		<< "?"
		<< std::endl;
}
