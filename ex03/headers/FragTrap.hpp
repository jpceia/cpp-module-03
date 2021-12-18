/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:27:18 by jceia             #+#    #+#             */
/*   Updated: 2021/12/18 23:01:11 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap: virtual public ClapTrap
{
public:
	// Constructors
	FragTrap(void);
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& rhs);

	// Destructor
	virtual ~FragTrap(void);

	// Assignment operator overload
	virtual FragTrap& operator=(const FragTrap& rhs);

	// Other methods
	void highFivesGuys(void);
};


#endif
