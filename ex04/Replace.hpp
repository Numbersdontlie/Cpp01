/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:25:22 by luifer            #+#    #+#             */
/*   Updated: 2024/11/10 17:20:07 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>

#define BLUE "\e[1;94m"
#define RED "\e[1;91m"
#define RESET "\033[0m"

class	Replace
{
	private:
	std::string file;
	std::string s1;
	std::string s2;
	void replaceOccurrences(std::string& content, const std::string& s1, const std::string& s2) const;

	public:
	Replace(const std::string& file, const std::string& s1, const std::string& s2);
	bool processFile() const;
};

#endif