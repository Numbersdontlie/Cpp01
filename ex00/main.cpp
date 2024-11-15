/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:07:03 by luifer            #+#    #+#             */
/*   Updated: 2024/11/15 11:18:08 by luifer           ###   ########.fr       */
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
    Zombie *heapZombie2 = newZombie("ZombieHeap2");
    Zombie *heapZombie3 = newZombie("ZombieHeap3");
    heapZombie->announce();
    heapZombie2->announce();
    heapZombie3->announce();
    delete heapZombie;
    delete heapZombie2;
    delete heapZombie3;

    randomChump("ZombieStack");
    randomChump("ZombieStack2");
    randomChump("ZombieStack3");
    return (0);
}