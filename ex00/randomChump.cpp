/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:19:52 by luifer            #+#    #+#             */
/*   Updated: 2024/11/08 13:36:12 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Function to create a Zombie in the stack (without "new" keyword)
//tempZombie is a stack allocated object, so it will be destroyed automatically
//when the function exits, calling the destructor for cleanup without needing explicit delete
void	randomChump(std::string name){
	Zombie temp = Zombie(name);
	temp.announce();
}
