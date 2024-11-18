/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 01:33:23 by luifer            #+#    #+#             */
/*   Updated: 2024/11/18 12:06:57 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    Weapon gun("AK-47 🔫");
    HumanA tony("Tony Montana", gun);
    tony.attack();
    gun.setType("AR-15 🔫");
    tony.attack();
    gun.setType("Desert Eagle 🔫");
    tony.attack();
    gun.setType("Chainsaw 🪚");
    tony.attack();

    HumanB luifer("Luifer");
    luifer.attack();
	Weapon machete("Machete 🗡️");
    luifer.setWeapon(machete);
    luifer.attack();
    machete.setType("Katana 🗡️");
    luifer.attack();
    machete.setType("Pata e kbra 🗡️");
    luifer.attack();

    return (0);
}
