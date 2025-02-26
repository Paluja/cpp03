/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 20:01:30 by pjimenez          #+#    #+#             */
/*   Updated: 2025/02/26 13:57:21 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap r2("R2D2");
    ClapTrap c3("C3PO");

    r2.attack("C3PO");
    c3.takeDamage(5);
    c3.beRepaired(5);
    
    ScavTrap wE ("Wall-E");
    ScavTrap eV ("Eve");

    wE.guardGate();
    eV.attack("Wall-E");
    wE.takeDamage(5);
    wE.beRepaired(5);
    wE.attack("Eve");
    eV.takeDamage(3);

    return (0);
}