/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:55:10 by pjimenez          #+#    #+#             */
/*   Updated: 2025/05/14 12:15:26 by pjimenez         ###   ########.fr       */
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
    this->name = cpy.name;
    this->hitPoints = cpy.hitPoints;
    this->energyPoints = cpy.energyPoints;
    this->attackDamage = cpy.attackDamage;
    std::cout << "ClapTrap assignation operator called" << std::endl;
    return (*this);
}

void ClapTrap::attack(const string &target)
{
    if (!this->isFunctional())
    {
        std::cout << "ClapTrap " << name << " cant't attack!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hitPoints -= amount;
    std::cout << "ClapTrap" << this->name << " lose " << amount << " of hit points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->isFunctional())
    {
        std::cout << "ClapTrap " << name << " cant't be repaired!" << std::endl;
        return;
    }
    this->hitPoints += amount;
    // this->energyPoints-=amount;
    this->energyPoints--;
    std::cout << "ClapTrap" << this->name << "repair itself " << amount << "of hit points!" << std::endl;
}


bool ClapTrap::isFunctional()
{
    if (this->hitPoints > 0 && this->energyPoints > 0)
        return (true);
    return (false);
}

std::string ClapTrap::getName() const
{
    return (this->name);
}

int ClapTrap::getHitPoints() const
{
    return (this->hitPoints);
}

int ClapTrap::getEnergyPoints() const
{
    return (this->energyPoints);
}

int ClapTrap::getAttackDamage() const
{
    return (this->attackDamage);
}
