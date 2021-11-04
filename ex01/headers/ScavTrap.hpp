/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:29:07 by jceia             #+#    #+#             */
/*   Updated: 2021/11/04 19:43:53 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &obj);
        ~ScavTrap(void);

        ScavTrap &operator=(ScavTrap const &rhs);

        void guardGate(void);
};

#endif
