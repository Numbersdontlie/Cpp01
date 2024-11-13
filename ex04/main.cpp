/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:10:01 by luifer            #+#    #+#             */
/*   Updated: 2024/11/13 23:41:57 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <iostream>
#include <string>

int main(int argc, char* argv[]){
    if (argc != 4){
        std::cerr << RED << "Error: provide the right # of args" << RESET << std::endl;
        return 1;
    }
    try
    {
    std::string file = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (s1.empty() || s2.empty()){
        std::cerr << RED << "Error: not empty strings" << RESET << std::endl;
        return 1;
    }

    Replace replace(file, s1, s2);
    replace.replaceString();
    }
    catch(std::exception& e)
    {
        std::cerr << RED << "Error: " << RESET << e.what() << std::endl;
        return 1;
    }
    return 0;
}
