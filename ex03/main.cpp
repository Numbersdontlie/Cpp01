/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 01:33:23 by luifer            #+#    #+#             */
/*   Updated: 2024/11/15 12:13:49 by luifer           ###   ########.fr       */
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

    Weapon machete("Machete 🗡️");
    HumanB luifer("Luifer");
    luifer.attack();
    luifer.setWeapon(machete);
    luifer.attack();
    machete.setType("Katana 🗡️");
    luifer.attack();
    machete.setType("Pata e kbra 🗡️");
    luifer.attack();

    return (0);
}
