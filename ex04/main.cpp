/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:10:01 by luifer            #+#    #+#             */
/*   Updated: 2024/11/12 15:56:26 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char* argv[]){
    if (argc != 4){
        std::cerr << "Error: provide the right # of args" << std::endl;
        return 1;
    }

    std::string file = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

	if(s1.empty() || s2.empty()){
		std::cerr<< RED << "Error: empty string not allowed" << RESET << std::endl;
		return 1;
	}

    Replace replace(file, s1, s2);
    if(!replace.processFile()){
        return 1;
    }
    return 0;
}