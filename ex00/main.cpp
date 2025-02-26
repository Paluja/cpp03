/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 20:01:30 by pjimenez          #+#    #+#             */
/*   Updated: 2025/02/25 20:06:05 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap r2("R2D2");
    ClapTrap c3("C3PO");

    r2.attack("C3PO");
    c3.takeDamage(5);
    c3.beRepaired(5);
    return (0);
}