/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:19:25 by pjimenez          #+#    #+#             */
/*   Updated: 2025/05/27 12:44:26 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const std::string &name) :
    ClapTrap(name + "_clap_name"), ScavTrap(name + "_frag_name"), FragTrap(name+ "_frag_name")
{
    this->name = name;
    std::cout << "DiamondTrap" << this->name <<"constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy) : 
    ClapTrap(cpy.name + "_clap_name"), ScavTrap(cpy.name + "_scav_name"), FragTrap(cpy.name + "_frap_name")
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    this->name = cpy.name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap "<< this->name << " destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "My name is " << this->name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}