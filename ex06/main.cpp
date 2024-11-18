/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 23:56:48 by luifer            #+#    #+#             */
/*   Updated: 2024/11/18 13:05:19 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(int argc, char **argv){
    if (argc != 2){
		std::cerr << RED << "Usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << RESET << std::endl;
		return 1;
	}
	Harl harl;
    harl.complain(argv[1]);
    return 0;
}