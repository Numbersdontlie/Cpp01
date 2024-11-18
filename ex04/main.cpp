/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:10:01 by luifer            #+#    #+#             */
/*   Updated: 2024/11/18 12:41:25 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int argc, char **argv){
    if(argc == 4){
        std::ifstream input_file;
        std::ofstream output_file;
        std::string line;
        std::string s1 = argv[2];
        std::string s2 = argv[3];

        input_file.open((argv[1]));
        if (!input_file){
            std::cerr << RED << "Error: couldn't open input file" << RESET << std::endl;
            return (1);
        }
		if (input_file.peek() == std::ifstream::traits_type::eof()){
			std::cerr << RED << "Error: file is empty" << RESET << std::endl;
			return (1);
		}
		output_file.open((std::string(argv[1]) + ".replace").c_str());
		if (!output_file){
			std::cerr << RED << "Error: couldn't create output file" << RESET << std::endl;
			return (1);
		}
		if (s1.empty() || s2.empty()){
			std::cerr << RED << "Provide a non empty string" << RESET << std::endl;
			return (1);
		}
		while (getline(input_file, line)){
			size_t pos = 0;
			while ((pos = line.find(s1, pos)) != std::string::npos){
				line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
				pos += s2.length();
			}
			output_file << line << std::endl;
		}
		output_file.close();
		input_file.close();
    }
	else{
		std::cout << RED << "Provide the right arguments: <file> <str_to_delete> <str_to_include>\n" << RESET << std::endl;
		return (1);
	}
	return (0);
}
