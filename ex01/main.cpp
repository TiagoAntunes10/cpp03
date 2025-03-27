/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 22:13:13 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/27 21:44:10 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/include.hpp"

int main(void) {
	ScavTrap	a;
	ScavTrap	b("Link");
	ScavTrap	c(b);
	ScavTrap	d("Zelda");

	a = d;

	std::cout << std::endl << "a attack: ";
	a.attack("Lizalfo");
	std::cout << "b attack: ";
	b.attack("Lizalfo");
	std::cout << "c attack: ";
	c.attack("Lizalfo");
	std::cout << "d attack: ";
	d.attack("Lizalfo");

	std::cout << std::endl << "a takeDamage: ";
	a.takeDamage(5);
	std::cout << "b takeDamage: ";
	b.takeDamage(5);
	std::cout << "c takeDamage: ";
	c.takeDamage(5);
	std::cout << "d takeDamage: ";
	d.takeDamage(5);

	std::cout << std::endl << "a beRepaired: ";
	a.beRepaired(5);
	std::cout << "b beRepaired: ";
	b.beRepaired(5);
	std::cout << "c beRepaired: ";
	c.beRepaired(5);
	std::cout << "d beRepaired: ";
	d.beRepaired(5);

	std::cout << std::endl << "a guardGate: ";
	a.guardGate();
	std::cout << "b guardGate: ";
	b.guardGate();
	std::cout << "c guardGate: ";
	c.guardGate();
	std::cout << "d guardGate: ";
	d.guardGate();

	std::cout << std::endl;
	a.takeDamage(100);
	std::cout << std::endl;

	for (int i = 0; i < 25; i++) {
		b.attack("enemy");
		b.beRepaired(1);
		std::cout << std::endl;
	}

	std::cout << std::endl;
}
