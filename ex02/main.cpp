/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 22:13:13 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/10 21:51:08 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/include.hpp"

int main(void) {
	ClapTrap	a;
	ClapTrap	b("Link");
	ClapTrap	c(b);
	ClapTrap	d("Zelda");

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

	std::cout << std::endl;
	a.takeDamage(10);
	std::cout << std::endl;

	b.attack("enemy");
	b.attack("enemy");
	b.attack("enemy");
	b.attack("enemy");
	b.attack("enemy");
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.attack("enemy");

	std::cout << std::endl << std::endl;

	ScavTrap	scav_a;
	ScavTrap	scav_b("Link");
	ScavTrap	scav_c(scav_b);
	ScavTrap	scav_d("Zelda");

	scav_a = scav_d;

	std::cout << std::endl << "scav_a attack: ";
	scav_a.attack("Lizalfo");
	std::cout << "scav_b attack: ";
	scav_b.attack("Lizalfo");
	std::cout << "scav_c attack: ";
	scav_c.attack("Lizalfo");
	std::cout << "scav_d attack: ";
	scav_d.attack("Lizalfo");

	std::cout << std::endl << "scav_a takeDamage: ";
	scav_a.takeDamage(5);
	std::cout << "scav_b takeDamage: ";
	scav_b.takeDamage(5);
	std::cout << "scav_c takeDamage: ";
	scav_c.takeDamage(5);
	std::cout << "scav_d takeDamage: ";
	scav_d.takeDamage(5);

	std::cout << std::endl << "scav_a beRepaired: ";
	scav_a.beRepaired(5);
	std::cout << "scav_b beRepaired: ";
	scav_b.beRepaired(5);
	std::cout << "scav_c beRepaired: ";
	scav_c.beRepaired(5);
	std::cout << "scav_d beRepaired: ";
	scav_d.beRepaired(5);

	std::cout << std::endl << "scav_a guardGate: ";
	scav_a.guardGate();
	std::cout << "scav_b guardGate: ";
	scav_b.guardGate();
	std::cout << "scav_c guardGate: ";
	scav_c.guardGate();
	std::cout << "scav_d guardGate: ";
	scav_d.guardGate();

	std::cout << std::endl;
	scav_a.takeDamage(100);
	std::cout << std::endl;

	for (int i = 0; i < 25; i++) {
		scav_b.attack("enemy");
		scav_b.beRepaired(1);
		std::cout << std::endl;
	}

	std::cout << std::endl << std::endl;

	FragTrap	frag_a;
	FragTrap	frag_b("Link");
	FragTrap	frag_c(frag_b);
	FragTrap	frag_d("Zelda");

	frag_a = frag_d;

	std::cout << std::endl << "frag_a attack: ";
	frag_a.attack("Lizalfo");
	std::cout << "frag_b attack: ";
	frag_b.attack("Lizalfo");
	std::cout << "frag_c attack: ";
	frag_c.attack("Lizalfo");
	std::cout << "frag_d attack: ";
	frag_d.attack("Lizalfo");

	std::cout << std::endl << "frag_a takeDamage: ";
	frag_a.takeDamage(5);
	std::cout << "frag_b takeDamage: ";
	frag_b.takeDamage(5);
	std::cout << "frag_c takeDamage: ";
	frag_c.takeDamage(5);
	std::cout << "frag_d takeDamage: ";
	frag_d.takeDamage(5);

	std::cout << std::endl << "frag_a beRepaired: ";
	frag_a.beRepaired(5);
	std::cout << "frag_b beRepaired: ";
	frag_b.beRepaired(5);
	std::cout << "frag_c beRepaired: ";
	frag_c.beRepaired(5);
	std::cout << "frag_d beRepaired: ";
	frag_d.beRepaired(5);

	std::cout << std::endl << "frag_a highFivesGuys: ";
	frag_a.highFivesGuys();
	std::cout << "frag_b highFivesGuys: ";
	frag_b.highFivesGuys();
	std::cout << "frag_c highFivesGuys: ";
	frag_c.highFivesGuys();
	std::cout << "frag_d highFivesGuys: ";
	frag_d.highFivesGuys();

	std::cout << std::endl;
	frag_a.takeDamage(100);
	std::cout << std::endl;

	for (int i = 0; i < 50; i++) {
		frag_b.attack("enemy");
		frag_b.beRepaired(1);
		std::cout << std::endl;
	}

	std::cout << std::endl;
}
