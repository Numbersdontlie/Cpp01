/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:33:37 by luifer            #+#    #+#             */
/*   Updated: 2024/11/13 23:36:27 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

Replace::Replace(const std::string& file, const std::string& s1, const std::string& s2) : file(file), s1(s1), s2(s2) {}

//Function to open the file and read its content
//it will save the file content into a buffer and will
//return the buffer as a string
std::string Replace::readFile() const{
    std::ifstream tmp(file.c_str());
    if(!tmp.is_open()){
        std::cerr << RED << "Error: couldn't open" << RESET << file << std::endl;
    }
    std::stringstream buffer;
    buffer << tmp.rdbuf();
    tmp.close();
    return buffer.str();
}

//Function to write the content of the buffer into a file
void Replace::writeFile(const std::string buffer) const{
    std::string replace = filename + ".replace";
    std::ofstream tmp(replace.c_str());
    if (!tmp.is_open()){
        std::cerr << RED << "Error: couldn't create" << RESET << replace << std::endl;
    }
    tmp << buffer;
    tmp.close();
}

//Function to replace the string s1 by s2 in the file
//it will read the file content and save it into a buffer
//then it will search for the string s1 in the buffer
//and replace it by s2
//finally it will write the buffer into a new file
//with the same name as the original file but with the
//extension .replace
void Replace::replaceString(){
    std::string buffer = readFile();
    size_t pos = 0;
    while ((pos = buffer.find(s1, pos)) != std::string::npos){
        buffer.erase(pos, s1.length());
        buffer.insert(pos, s2);
        pos += s2.length();
    }
    writeFile(buffer);
}