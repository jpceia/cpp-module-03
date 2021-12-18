/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:29:07 by jceia             #+#    #+#             */
/*   Updated: 2021/12/18 22:37:17 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap: virtual public ClapTrap
{
    public:
        // Constructors
        ScavTrap(void);
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& rhs);

        // Destructor
        virtual ~ScavTrap(void);

        // Assignment operator overload
        virtual ScavTrap& operator=(const ScavTrap& rhs);

        // Other methods
        virtual void attack(const std::string& target);
        void guardGate(void);
};

#endif
