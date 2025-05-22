/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:28:10 by pjimenez          #+#    #+#             */
/*   Updated: 2025/05/22 13:18:16 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const string &name) : ClapTrap(name)
{
       std::cout << "ScavTrap "<< this->name <<" constructor called" << std::endl;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &cpy)
{
    if (this == &cpy)
        return (*this);
    this->name = cpy.getName();
    this->hitPoints = cpy.getHitPoints();
    this->energyPoints = cpy.getEnergyPoints();
    this->attackDamage = cpy.getAttackDamage();
    
    std::cout << "ScavTrap assignation operator called" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap "<< this->name <<"   destructor called" << std::endl;
}

void ScavTrap::attack(const string &target)
{
    if (!this->isFunctional())
    {
        std::cout << "ScavTrap " << name << " cant't attack!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " have enterred in Gate keeper mode" << std::endl;
}