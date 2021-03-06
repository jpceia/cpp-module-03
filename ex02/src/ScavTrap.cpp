/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:41:30 by jceia             #+#    #+#             */
/*   Updated: 2021/12/18 23:25:39 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) :
    ClapTrap("ScavTrap")
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) :
    ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " is created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& rhs)
    : ClapTrap(rhs)
{
    std::cout << "ScavTrap " << _name << " is copied" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
    ClapTrap::operator= (rhs);
    std::cout << "ScavTrap " << _name << " assignment operator is called"
        << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << _name << " is destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap " << _name << " attacks " << target
        << " at range, causing " << _attackDamage << " points of damage!"
        << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " have enterred in gate keeper mode."
        << std::endl;
}
