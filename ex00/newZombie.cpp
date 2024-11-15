/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:19:17 by luifer            #+#    #+#             */
/*   Updated: 2024/11/15 11:20:51 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

//The function returns a pointer to a Zombie object created with "new" (malloc kind of)
//need to delete when no longer needed to avoid memory leaks
Zombie	*newZombie(std::string name){
	Zombie *new_zombie = new Zombie(name);
	return (new_zombie);
}
