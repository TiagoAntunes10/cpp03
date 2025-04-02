/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:39:53 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/02 22:07:16 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/include.hpp"

int	FragTrap::_hitPoints = 100;
int	FragTrap::_atkDamage = 30;

FragTrap::FragTrap( void ) : ClapTrap() {
	ClapTrap::_hitPoints = _hitPoints;
	ClapTrap::_atkDamage = _atkDamage;
	if (ClapTrap::_energyPoints == 10)
		_energyPoints = 100;

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
	ClapTrap::_hitPoints = _hitPoints;
	ClapTrap::_atkDamage = _atkDamage;
	if (ClapTrap::_energyPoints == 10)
		_energyPoints = 100;

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
	_name = st._name;

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
	_name = st._name;

	if (ClapTrap::_atkDamage == 0)
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
