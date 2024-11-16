/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:25:22 by luifer            #+#    #+#             */
/*   Updated: 2024/11/16 18:52:05 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#define BLUE "\e[1;94m"
#define RED "\e[1;91m"
#define RESET "\033[0m"

class	Replace
{
	private:
		std::string file;
		std::string s1;
		std::string s2;
		std::string open_file() const;
		void createFile(const std::string &buffer) const;

	public:
		Replace(const std::string &file, const std::string &s1, const std::string &s2);
		void replaceString();
};

#endif