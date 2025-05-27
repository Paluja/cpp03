/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:20:08 by pjimenez          #+#    #+#             */
/*   Updated: 2025/05/27 12:45:09 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const string &name) : ClapTrap(name)
{
    std::cout << "FragTrap  "<<this->name <<"  constructor called" << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &cpy)
{
    if (this == &cpy)
        return (*this);
    this->name = cpy.getName();
    this->hitPoints = cpy.getHitPoints();
    this->energyPoints = cpy.getEnergyPoints();
    this->attackDamage = cpy.getAttackDamage();
    
    std::cout << "FragTrap assignation operator called" << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap  "<<this->name <<"  destructor called" << std::endl;
}



void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " sends a big positive high fives guys!" << std::endl;
}
