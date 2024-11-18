/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:10:16 by luifer            #+#    #+#             */
/*   Updated: 2024/11/18 13:08:19 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

//Function to print debug message
void Harl::debug(void){
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << BLUE << "You can do better at debugging folk!...think about it!\n" << RESET << std::endl;
}

//function to print info message
void Harl::info(void){
    std::cout << "[ INFO ]" << std::endl;
    std::cout << BLUE << "Missinformation is bad for you, Stay informed...\n" << RESET << std::endl;
}

//function to print warning message
void Harl::warning(void){
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << BLUE << "Things are getting loco around here...it's not a warning, but maybe it is ;)\n" << RESET << std::endl;
}

//function to print error message
void Harl::error(void){
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << RED << "404? Really Folk?" << RESET << std::endl;
}

//Function to create an array of pointers to member functions
//and an array of strings to compare the level and call the
//correct function
void Harl::complain(std::string level){
    
    void (Harl::*complainPtr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int level_idx = -1;
    for(int i = 0; i < 4; ++i){
        if(levels[i] == level){
            level_idx = i;
            break;
        }
    }

    switch(level_idx){
        case 0:
            (this->*complainPtr[0])();
            //fall through
        case 1:
            (this->*complainPtr[1])();
            //fall through
        case 2:
            (this->*complainPtr[2])();
            //fall through
        case 3:
            (this->*complainPtr[3])();
            break;
        default:
           std::cout << RED << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
    }
}