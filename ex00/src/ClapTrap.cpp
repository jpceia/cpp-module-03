/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:18:39 by jceia             #+#    #+#             */
/*   Updated: 2021/12/15 00:11:32 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
    _name("ClapTrap"),
    _hitPoints(10),
    _energyPoints(10),
    _attackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
    _name(name),
    _hitPoints(10),
    _energyPoints(10),
    _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& rhs)
{
    *this = rhs;
    std::cout << "ClapTrap " << _name << " is copied" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " is destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap& rhs)
{
    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    std::cout << "ClapTrap " << _name << " assignment operator is called"
        << std::endl;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints < 5)
        std::cout << "ClapTrap " << _name << " is out of energy." << std::endl;
    else
    {
        // ClapTrap <name> attack <target>, causing <damage> points of damage!
        std::cout << "ClapTrap " << _name << " attack " << target
            << ", causing " << _attackDamage << " points of damage!"
            << std::endl;
        _energyPoints -= 5;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints < amount)
    {
        _hitPoints = 0;
        std::cout << "ClapTrap " << _name << " is dead" << std::endl;
    }
    else
    {
        _hitPoints -= amount;
        std::cout << "ClapTrap " << _name << " takes " << amount << " damage";
        std::cout << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints + amount > 100)
    {
        _hitPoints = 100;
        std::cout << "ClapTrap " << _name << " is fully repaired";
        std::cout << std::endl;
    }
    else
    {
        _hitPoints += amount;
        std::cout << "ClapTrap " << _name << " is repaired by " << amount;
        std::cout << std::endl;
    }
}
