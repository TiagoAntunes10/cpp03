/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 22:15:17 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/24 21:05:35 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/include.hpp"


ClapTrap::ClapTrap( void ) {
	_hitPoints = 10;
	_energyPoints = 10;
	_atkDamage = 0;

	std::cout << "ClapTrap default constructor called"
		<< " (Total health: "
		<< _hitPoints
		<< "; Total energy: "
		<< _energyPoints
		<< ")"
		<< std::endl;
}

ClapTrap::ClapTrap( std::string name ) {
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_atkDamage = 0;

	std::cout << "ClapTrap "
		<< _name
		<< ": String constructor called"
		<< " (Total health: "
		<< _hitPoints
		<< "; Total energy: "
		<< _energyPoints
		<< ")"
		<< std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap " << _name << ": Destructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &ct ) {
	*this = ct;

	std::cout << "ClapTrap "
		<< _name
		<< ": Copy constructor called"
		<< " (Total health: "
		<< _hitPoints
		<< "; Total energy: "
		<< _energyPoints
		<< ")"
		<< std::endl;
}

ClapTrap	&ClapTrap::operator=( ClapTrap const &ct ) {
	_name = ct._name;
	_hitPoints = ct._hitPoints;
	_energyPoints = ct._energyPoints;
	_atkDamage = ct._atkDamage;

	std::cout << "ClapTrap "
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

void	ClapTrap::attack( const std::string &target ) {
	_energyPoints--;

	std::cout << _name
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

void	ClapTrap::takeDamage( unsigned int amount ) {
	_hitPoints -= amount;

	std::cout << _name
		<< " receives "
		<< amount
		<< " damage! (Total health: "
		<< _hitPoints
		<< "; Total energy: "
		<< _energyPoints
		<< ")"
		<< std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	_energyPoints--;
	_hitPoints += amount;

	std::cout << _name
		<< " receives "
		<< amount
		<< " health! (Total health: "
		<< _hitPoints
		<< "; Total energy: "
		<< _energyPoints
		<< ")"
		<< std::endl;
}
