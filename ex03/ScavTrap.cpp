/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:07:27 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/02 22:17:31 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/include.hpp"

int	ScavTrap::_energyPoints = 50;

ScavTrap::ScavTrap( void ) : ClapTrap() {
	ClapTrap::_energyPoints = _energyPoints;
	_hitPoints = 100;
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
	ClapTrap::_energyPoints = _energyPoints;
	_hitPoints = 100;
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
	_name = st._name;

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
	_name = st._name;

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
	if (ClapTrap::_energyPoints == 0) {
		std::cout << "No energy to perform action!" << std::endl;
		return ;
	}
	else if (ClapTrap::_hitPoints == 0) {
		std::cout << _name << " is dead!" << std::endl;
		return ;
	}

	ClapTrap::_energyPoints--;

	std::cout << "ScavTrap "
		<< _name
		<< " attacks "
		<< target
		<< ", causing "
		<< _atkDamage
		<< " points of damage! (Total health: "
		<< _hitPoints
		<< "; Total energy: "
		<< ClapTrap::_energyPoints
		<< ")"
		<< std::endl;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap "
		<< _name
		<< " is now in gate keeper mode! (Total health: "
		<< _hitPoints
		<< "; Total energy: "
		<< ClapTrap::_energyPoints
		<< ")"
		<< std::endl;
}
