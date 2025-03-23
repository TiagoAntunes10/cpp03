/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:07:27 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/23 22:30:44 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/include.hpp"


ScavTrap::ScavTrap( void ) : ClapTrap() {
	_hitPoints = 100;
	_energyPoints = 50;
	_atkDamage = 20;

	std::cout << "ScavTrap default constructor called"
		<< " (Total health: "
		<< _hitPoints
		<< "; Total energy: "
		<< _energyPoints
		<< ")"
		<< std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_atkDamage = 20;

	std::cout << "ScavTrap "
		<< _name
		<< ": String constructor called"
		<< " (Total health: "
		<< _hitPoints
		<< "; Total energy: "
		<< _energyPoints
		<< ")"
		<< std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &st ) : ClapTrap(st) {
	std::cout << "ScavTrap "
		<< _name
		<< ": Copy constructor called"
		<< " (Total health: "
		<< _hitPoints
		<< "; Total energy: "
		<< _energyPoints
		<< ")"
		<< std::endl;
}

ScavTrap &ScavTrap::operator= ( ScavTrap const &st ) {
	ClapTrap::operator= (st);

	std::cout << "ScavTrap "
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

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap " << _name << ": Destructor called" << std::endl;
}

void	ScavTrap::attack( std::string target ) {
	_energyPoints--;

	std::cout << "ScavTrap "
		<< _name
		<< " attacks "
		<< target
		<< ", causing "
		<< _atkDamage
		<< " points of damage! (Total health: "
		<< _hitPoints
		<< "; Total energy: "
		<< _energyPoints
		<< ")"
		<< std::endl;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap "
		<< _name
		<< " is now in gate keeper mode! (Total health: "
		<< _hitPoints
		<< "; Total energy: "
		<< _energyPoints
		<< ")"
		<< std::endl;
}
