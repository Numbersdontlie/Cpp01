/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:16:12 by luifer            #+#    #+#             */
/*   Updated: 2024/11/15 12:05:48 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define BLUE "\e[1;94m"
#define CYAN "\e[1;31m"
#define GREEN "\e[1;32m"
#define RESET "\033[0m"

int main(){
	std::string var = "HI THIS IS BRAIN.";
	std::string *stringPTR = &var;
	std::string &stringREF = var;

	std::cout << BLUE << "Mem Address of string variable " << &var << RESET << std::endl;
	std::cout << CYAN << "Mem Address of stringPTR " << &stringPTR << RESET << std::endl;
	std::cout << GREEN << "Mem Address of strinfREF " << &stringREF << RESET << std::endl;

	std::cout << BLUE << "Value of variable " << var << RESET << std::endl;
	std::cout << CYAN << "Value pointed to by stringPTR " << stringPTR << RESET << std::endl;
	std::cout << GREEN << "Value pointed to by stringREF " << stringREF << RESET << std::endl;
}