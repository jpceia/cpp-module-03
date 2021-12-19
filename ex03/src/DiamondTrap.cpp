/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 01:10:19 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/18 23:58:03 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : _name("DiamondTrap")
{
    ClapTrap::_name = _name + "_clap_name";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : _name(name)
{
    ClapTrap::_name = _name + "_clap_name";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& rhs)
{
    *this = rhs;
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
    ClapTrap::operator=(rhs);
    if (this != &rhs)
        this->_name = rhs._name;
    std::cout << "DiamondTrap " << _name << " assignment operator is called"
        << std::endl;
    return *this;
}

std::string DiamondTrap::getName(void) const
{
    return _name;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "My name is " << _name << std::endl;
    std::cout << "My clapTrap name is " << ClapTrap::_name << std::endl;
}
