/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:55:10 by pjimenez          #+#    #+#             */
/*   Updated: 2025/02/26 11:33:06 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const string &name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
    *this = cpy;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cpy)
{
    name = cpy.name;
    hitPoints = cpy.hitPoints;
    energyPoints = cpy.energyPoints;
    attackDamage = cpy.attackDamage;
    std::cout << "ClapTrap assignation operator called" << std::endl;
    return (*this);
}

void ClapTrap::attack(const string &target)
{
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hitPoints -= amount;
    std::cout << "ClapTrap" << this->name << "lose" << amount << "of hit points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->hitPoints += amount;
    std::cout << "ClapTrap" << this->name << "repair itself " << amount << "of hit points!" << std::endl;
}

void ClapTrap::setName(const string &name)
{
    this->name = name;
}
