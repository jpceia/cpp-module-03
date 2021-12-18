/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:28:19 by jceia             #+#    #+#             */
/*   Updated: 2021/12/15 00:50:54 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) :
    ClapTrap("FragTrap")
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
    : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " is created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& rhs)
    : ClapTrap(rhs)
{
    std::cout << "FragTrap " << _name << " is copied" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
    ClapTrap::operator=(rhs);
    std::cout << "FragTrap " << _name << " assignment operator is called"
        << std::endl;
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << _name << " is destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests high-fives to the guys"
        << std::endl;
}
