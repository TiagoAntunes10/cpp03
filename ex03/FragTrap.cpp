/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:39:53 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/24 21:07:50 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/include.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
	_hitPoints = 100;
	_energyPoints = 50;
	_atkDamage = 30;

	std::cout << "FragTrap default constructor called"
		<< " (Total health: "
		<< _hitPoints
		<< "; Total energy: "
		<< _energyPoints
		<< ")"
		<< std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_atkDamage = 30;

	std::cout << "FragTrap "
		<< _name
		<< ": String constructor called"
		<< " (Total health: "
		<< _hitPoints
		<< "; Total energy: "
		<< _energyPoints
		<< ")"
		<< std::endl;
}

FragTrap::FragTrap( FragTrap const &st ) : ClapTrap(st) {
	std::cout << "FragTrap "
		<< _name
		<< ": Copy constructor called"
		<< " (Total health: "
		<< _hitPoints
		<< "; Total energy: "
		<< _energyPoints
		<< ")"
		<< std::endl;
}

FragTrap &FragTrap::operator= ( FragTrap const &st ) {
	ClapTrap::operator= (st);

	std::cout << "FragTrap "
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

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap " << _name << ": Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "Positive high five?" << std::endl;

}
