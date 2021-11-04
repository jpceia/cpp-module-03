/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:18:39 by jceia             #+#    #+#             */
/*   Updated: 2021/11/04 19:27:27 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: _name(name)
{
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << _name << " is created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	*this = obj;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " is destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator= (ClapTrap const &obj)
{
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
	std::cout << "ClapTrap " << _name << " is copied" << std::endl;
	return (*this);
}

void ClapTrap::attack(std::string const &target)
{
	if (_energyPoints < 5)
		std::cout << "ClapTrap " << _name << " is out of energy" << std::endl;
	else
	{
		// ClapTrap <name> attack <target>, causing <damage> points of damage!
		std::cout << "ClapTrap " << _name << " attack " << target;
		std::cout << ", causing " << _attackDamage << " points of damage!";
		std::cout << std::endl;
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