/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 01:08:13 by luifer            #+#    #+#             */
/*   Updated: 2024/11/18 12:04:17 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name) : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon& weapon){
	this->weapon = &weapon;
}

void HumanB::attack(){
	if(weapon){
		std::cout << BLUE << name << " attacks with their " << weapon->getType() << RESET << std::endl;
	}
	else{
		std::cout << RED << name << " has no weapon to attack...yo better run pal! 🏃 🏃 🏃" << RESET << std::endl;
	}
}