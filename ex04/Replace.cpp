/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:33:37 by luifer            #+#    #+#             */
/*   Updated: 2024/11/12 16:32:43 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

Replace::Replace(const std::string& file, const std::string& s1, const std::string& s2) : file(file), s1(s1), s2(s2) {}

void Replace(const std::string& file, const std::string& s1, const std::string& s2){
    
    std::ifstream inputFile (file.c_str());
	if(!inputFile){
		std::cerr << RED << "Error: file not found" << RESET << std::endl;
		return;
	}

	std::string outputFileName = file + ".replace";
	std::ofstream outputFile(outputFileName.c_str());
	if (!outputFile){
		std::cerr << RED << "Error creating the file" << RESET << std::endl;
		return;
	}
	
	std::string content;
	size_t pos = 0;
	while(std::getline(inputFile, content)){
		while ((pos = content.find(s1, pos)) != std::string::npos){
			content = content.substr(0, pos) + s2 + content.substr(pos + s1.length());
			pos += s2.length();
		}
		outputFile << content << std::endl;
	}
	inputFile.close();
	outputFile.close();
}

std::string Replace::openFile()const{
	std::ifstream read(filename.c_str());
	if (!read){
		
	}
}