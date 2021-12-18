/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:29:07 by jceia             #+#    #+#             */
/*   Updated: 2021/12/18 22:59:15 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap: public ClapTrap
{
public:
    // Constructors
    ScavTrap(void);
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& rhs);

    // Destructor
    ~ScavTrap(void);

    // Assignment operator overload
    ScavTrap& operator=(const ScavTrap& rhs);

    // Other methods
    void attack(const std::string& target);
    void guardGate(void);
};

#endif
