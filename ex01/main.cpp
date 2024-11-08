/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:46:30 by luifer            #+#    #+#             */
/*   Updated: 2024/11/08 14:53:23 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

 Zombie *zombieHorde(int N, std::string name);

 int main(){
    int N = 6;
    std::string name = "ZombieHorde";
    Zombie *tmp = zombieHorde(N, name);
    if (tmp){
        for(int i = 0; i <= N; i++){
            tmp[i].announce();
        }
        delete[] tmp;
    }
    else{
        std::cout << RED << " horde wasn't created" << RESET << std::endl;
    }
    return (0);
 }