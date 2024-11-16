/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:33:37 by luifer            #+#    #+#             */
/*   Updated: 2024/11/16 18:52:03 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

Replace::Replace(const std::string& file, const std::string& s1, const std::string& s2) : file(file), s1(s1), s2(s2) {}

//Function to open the file and save it into a buffer, this buffer will be later used on
//to replace the string and generate the new file with the replaced words
std::string open_file()const{
    std::ifstream old_file.open(file.c_str(), std::ios::in);
    if(!old_file){
        std::cerr << RED << "Error while opening file" << std::endl;
        return;
    }
    std::stringstream buffer;
    buffer << old_file.rdbuf();
    old_file.close();
    return buffer.str();
}

void Replace::createFile(const std::string &buffer) const{
    std::string replace = file + ".replace";
    std::ofstream new_file.open(replace.c_str(), std::ios::out);
    if(!new_file){
        std::cerr << RED << "Error: creating new file" << RESET << std::endl;
        return;
    }
    new_file << buffer;
    new_file.close();
}

void Replace::replaceString(std::string file, std::string s1, std::string s2){
    std::ifstream old_file;
    std::ofstream new_file;
    
    size_t pos = 0;
    size_t start = 0;
    old_file.open(file.c_str(), std::ios::in);
    if (!old_file){
        std::cerr << RED << "Error: couldn't open the file\n" << RESET << std::endl;
        return;
    }
    new_file.open(std::string(file + ".replace").c_str(), std::ios::out);
    if (!new_file){
        std::cerr << RED << "Error: couldn't open the file\n" << RESET << std::endl;
        return;
    }
    std::string line;
    while (std::getline(file, line)){
        std::string modified;
        while(true){
            pos = line.find(s1, start);
            if (pos == std::string::npos){
                modified += line.substr(start);
                break;
            }
            modified += line.substr(start, pos - start);
            modified += s2;
            start = pos + s2.length();
        }
        new_file << modified << "\n";
    }
    old_file.close();
    new_file.close();
}