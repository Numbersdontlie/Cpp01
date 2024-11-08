/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:07:03 by luifer            #+#    #+#             */
/*   Updated: 2024/11/08 13:36:59 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

//heap
Zombie *newZombie(std::string name);
//stack
void randomChump(std::string name);

int main(){
    Zombie *heapZombie = newZombie("ZombieHeap");
    heapZombie->announce();
    delete heapZombie;

    randomChump("ZombieStack");
    return (0);
}