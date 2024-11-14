/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:00:35 by luifer            #+#    #+#             */
/*   Updated: 2024/11/14 15:04:38 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"
# include <iostream>
# include <string>

//Function to print debug message
void Harl::debug(void){
    std::cout << BLUE << "You can do better at debugging folk!...think about it!" << RESET << std::endl;
}

//function to print info message
void Harl::info(void){
    std::cout << BLUE << "Missinformation is bad for you, Stay informed..." << RESET << std::endl;
}

//function to print warning message
void Harl::warning(void){
    std::cout << BLUE << "Things are getting loco around here...it's not a warning, but maybe it is ;)" << RESET << std::endl;
}

//function to print error message
void Harl::error(void){
    std::cout << RED << "404? Really Folk?" << RESET << std::endl;
}

//Function to create an array of pointers to member functions
//and an array of strings to compare the level and call the
//correct function
void Harl::complain(const std::string &level){
    void (Harl::*complainPtr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++){
        if(levels[i] == level){
            (this->*complainPtr[i])();
            return;
        }
    }
    std::cerr << RED << "Invalid level" << RESET << std::endl;
}