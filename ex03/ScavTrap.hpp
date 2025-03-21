/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:28:16 by pjimenez          #+#    #+#             */
/*   Updated: 2025/03/12 12:10:20 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
#define _SCAVTRAP_HPP_

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
typedef std::string string;

class ScavTrap: virtual public ClapTrap
{
    public :
        ScavTrap();
        explicit ScavTrap(const string &name);
        ScavTrap(const ScavTrap &cpy);
        ~ScavTrap();
        ScavTrap &operator=(const ScavTrap &cpy);
        
        virtual void attack(const string &target);
        void guardGate();
};

#endif