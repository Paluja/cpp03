/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:20:04 by pjimenez          #+#    #+#             */
/*   Updated: 2025/03/05 15:10:36 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP_
#define _FRAGTRAP_HPP_

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
typedef std::string string;

class FragTrap: virtual public ClapTrap
{
    public :
        FragTrap();
        explicit FragTrap(const string &name);
        FragTrap(const FragTrap &cpy);
        FragTrap &operator=(const FragTrap &cpy);
        ~FragTrap();
        
        void highFivesGuys(void);
};

#endif

