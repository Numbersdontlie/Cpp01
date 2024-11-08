/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:58:48 by luifer            #+#    #+#             */
/*   Updated: 2024/11/08 23:51:50 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

//Default constructor
Zombie::Zombie() {}

//constructor: to init zombie's name with provided string
Zombie::Zombie(std::string name){
	this->name = name;
	std::cout << BLUE << name << " was created\n" << RESET;
}

//destructor: prints a message showing the destroyed zombie
Zombie::~Zombie(){
	std::cout << RED << name << " this zombie has been destroyed. No walking dead in town\n" << RESET;
}

//Put the zombie announcement in the required format
void	Zombie::announce(void){
	std::cout << BLUE << this->name << ": BraiiiiiiinnnzzzZ...\n" << RESET;
}

void	Zombie::setName(std::string name){
	this->name = name;
}