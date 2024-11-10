/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:33:37 by luifer            #+#    #+#             */
/*   Updated: 2024/11/10 17:20:02 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

Replace::Replace(const std::string& file, const std::string& s1, const std::string& s2) : file(file), s1(s1), s2(s2) {}

void Replace::replaceOccurrences(std::string& content, const std::string& s1, const std::string& s2){
    size_t i = 0;
    while((i = file.find(s1, i)) != std::string::npos){
        file.erase(i, s1.length());
        file.insert(i, s2);
        i += s2.length();
    }
}

bool Replace::processFile() const{
    std::ifstream inputFile(file.c_str());
    if (!inputFile){
        std::cerr << RED << "Error:couldn't open file" << file << RESET << std::endl;
        return false;
    }
    std::string content((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
    inputFile.close();
    
    replaceOccurrences(content, s1, s2);

    std::ofstream outputFile((file + ".replace").c_str());
    if(!outputFile){
        std::cerr << RED << "Error: couldn't create file" << file << ".replace" << RESET << std::endl;
        return false;
    }
    outputFile << content;
    outputFile.close();
    return true;
}
