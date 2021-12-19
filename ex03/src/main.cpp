/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:18:47 by jceia             #+#    #+#             */
/*   Updated: 2021/12/19 00:03:18 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap p("Pikachu");

    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Name: " << p.getName() << std::endl;
    std::cout << "Claptrap Name: " << p.ClapTrap::getName() << std::endl;
    std::cout << "Hit Points: " << p.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << p.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << p.getAttackDamage() << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    std::cout << std::endl;
    std::cout << "Testing different methods:" << std::endl;
    p.attack("Team Rocket");    // method inherited from ScavTrap
    p.takeDamage(5);            // method inherited from ClapTrap
    p.attack("Team Rocket");    // method inherited from ScavTrap
    p.takeDamage(5);            // method inherited from ClapTrap
    p.attack("Team Rocket");    // method inherited from ScavTrap
    p.beRepaired(10);           // method inherited from ClapTrap
    p.beRepaired(10);           // method inherited from ClapTrap
    
    p.guardGate();              // method inherited from ScavTrap
    p.highFivesGuys();          // method inherited from FragTrap
    p.whoAmI();

    std::cout << std::endl;

    DiamondTrap p2("Ash");

    p = p2;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Testing assigment operator:" << std::endl;
    p.whoAmI();
    std::cout << "----------------------------------------" << std::endl;

    return 0;
}
