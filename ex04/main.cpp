/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:10:01 by luifer            #+#    #+#             */
/*   Updated: 2024/11/10 17:20:04 by luifer           ###   ########.fr       */
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

    Replace replacer(file, s1, s2);
    if(!replacer.processFile()){
        return 1;
    }
    return 0;
}