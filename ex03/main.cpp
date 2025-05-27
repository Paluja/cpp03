/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 20:01:30 by pjimenez          #+#    #+#             */
/*   Updated: 2025/05/27 12:42:59 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	Diamond("Daniel");

	Diamond.attack("Pirates");
	Diamond.attack("Vikings");
	Diamond.attack("Cowboys");
	// Diamond.ScavTrap::attack("Pirates");
	// Diamond.ScavTrap::attack("Vikings");
	// Diamond.ScavTrap::attack("Cowboys");
	Diamond.beRepaired(10);
	Diamond.takeDamage(100);
	Diamond.guardGate();
	Diamond.highFivesGuys();
	Diamond.whoAmI();
}