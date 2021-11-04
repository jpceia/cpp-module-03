/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:41:30 by jceia             #+#    #+#             */
/*   Updated: 2021/11/04 19:50:32 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " is created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj): ClapTrap(obj)
{
    std::cout << "ScavTrap " << _name << " is created" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs)
{
    if (this != &rhs)
    {
        _name = rhs._name;
        _hitPoints = rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _attackDamage = rhs._attackDamage;
        std::cout << "ScavTrap " << _name << " is copied" << std::endl;
    }
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << _name << " is destroyed" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " is guarding" << std::endl;
}
