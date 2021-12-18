/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:18:47 by jceia             #+#    #+#             */
/*   Updated: 2021/12/18 23:23:19 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap    p("Pikachu");

    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Name: " << p.getName() << std::endl;
    std::cout << "Hit Points: " << p.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << p.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << p.getAttackDamage() << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    p.attack("Team Rocket");
    p.takeDamage(5);
    p.attack("Team Rocket");
    p.takeDamage(5);
    p.attack("Team Rocket");
    p.beRepaired(10);
    p.beRepaired(10);
    p.highFivesGuys();
    return 0;
}
