/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:18:59 by jceia             #+#    #+#             */
/*   Updated: 2021/12/18 22:57:21 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:
    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;

public:
    // Constructors
    ClapTrap(void);
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& rhs);

    // Destructor
    ~ClapTrap(void);

    // Assignment operator overload
    ClapTrap &operator= (const ClapTrap& rhs);

    // Getters
    std::string     getName(void) const;
    unsigned int    getHitPoints(void) const;
    unsigned int    getEnergyPoints(void) const;
    unsigned int    getAttackDamage(void) const;

    // Other methods
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
