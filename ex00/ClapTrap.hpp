/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:55:06 by pjimenez          #+#    #+#             */
/*   Updated: 2025/05/15 13:48:11 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
#define _CLAPTRAP_HPP_


#include <iostream>
#include <string>
typedef std::string string;

class ClapTrap 
{
    private:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;

    public:
        ClapTrap();
       explicit ClapTrap(const string &name);
        ClapTrap(const ClapTrap &cpy);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &cpy);
        
        std::string getName() const;
        int getHitPoints() const;
        int getEnergyPoints() const;
        int getAttackDamage() const;
        
        void attack(const string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        bool isFunctional();
};
    
#endif