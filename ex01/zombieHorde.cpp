/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:01:36 by luifer            #+#    #+#             */
/*   Updated: 2024/11/08 14:49:09 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

//Allocate for N objects of zombies
//initialize each one of them with their name given as parameter
//it have to return a ptr to the 1st zombie
//call announce for each one of the zombies
//delete all the zombies
Zombie *zombieHorde(int N, std::string name){
	Zombie *tmp = new Zombie[N];
	for (int i = 0; i < N; i++){
		tmp[i].setName(name);
	}
	return tmp;
}