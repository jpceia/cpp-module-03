/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 00:53:13 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/18 23:57:03 by jpceia           ###   ########.fr       */
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

    // Getters
    std::string getName(void) const;

    // Other methods
    using ScavTrap::attack;
    void whoAmI(void);
};

#endif
