/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:55:06 by pjimenez          #+#    #+#             */
/*   Updated: 2025/02/25 17:10:45 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
#define _CLAPTRAP_HPP_

typedef std::string string;

#include <iostream>

class ClapTrap 
{
    private:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    
    public:
        ClapTrap();
        ClapTrap(const string &name);
        ClapTrap(const ClapTrap &cpy);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &cpy);
        void attack(const string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
    
#endif