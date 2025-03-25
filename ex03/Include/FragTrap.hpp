/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:39:21 by tialbert          #+#    #+#             */
/*   Updated: 2025/03/25 21:33:14 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "./ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	public:
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( FragTrap const &st );
		FragTrap &operator= ( FragTrap const &st );
		~FragTrap( void );
		void	highFivesGuys( void );
};

#endif
