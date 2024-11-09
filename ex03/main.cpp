/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 01:33:23 by luifer            #+#    #+#             */
/*   Updated: 2024/11/09 01:49:33 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    Weapon gun("AK-47");
    HumanA tony("Tony", gun);
    tony.attack();
    gun.setType("AR-15");
    tony.attack();

    Weapon machete("Machete");
    HumanB luifer("Luifer");
    luifer.attack();
    luifer.setWeapon(machete);
    luifer.attack();
    machete.setType("Katana");
    luifer.attack();

    return (0);
}
