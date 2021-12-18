/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 00:53:13 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/18 21:58:36 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;
public:
    // Constructors
    DiamondTrap(void);
    DiamondTrap(const std::string& name);
    DiamondTrap(const DiamondTrap& rhs);
    
    // Destructor
    ~DiamondTrap(void);
    
    // Assignment operator overload
    DiamondTrap& operator=(const DiamondTrap& rhs);

    using FragTrap::_hitPoints;
    using ScavTrap::_energyPoints;
    using FragTrap::_attackDamage;
    using ScavTrap::attack;
    
    // Other methods
    void whoAmI(void);
};

#endif
