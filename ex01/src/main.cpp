/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:18:47 by jceia             #+#    #+#             */
/*   Updated: 2021/11/05 00:25:32 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    p("Pikachu");

    p.attack("Team Rocket");
    p.takeDamage(5);
    p.attack("Team Rocket");
    p.takeDamage(5);
    p.attack("Team Rocket");
    p.beRepaired(10);
    p.beRepaired(10);
    p.guardGate();
    return 0;
}
