/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:58:48 by luifer            #+#    #+#             */
/*   Updated: 2024/11/15 12:38:48 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>


//constructor: default constructor announces the zombie creation
Zombie::Zombie(void) {}

//destructor: prints a message showing the destroyed zombie
Zombie::~Zombie(void){
	std::cout << RED << name << " this zombie has been destroyed. No walking dead in town\n" << RESET;
	std::cout << PURPLE << "Addres of destroyed Zombie is:" << &this->name << RESET << std::endl;
}

//Put the zombie announcement in the required format
void	Zombie::announce(void){
	std::cout << BLUE << this->name << ": BraiiiiiiinnnzzzZ...\n" << RESET;
	std::cout << BLUE << "Zombies: 🧟 \n" << RESET;
}

void	Zombie::setName(std::string name){
	this->name = name;
	std::cout << PURPLE << "Addres of this is:" << &this->name << RESET << std::endl;
}