/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:58:20 by luifer            #+#    #+#             */
/*   Updated: 2024/11/08 23:37:13 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

#define BLUE "\e[1;94m"
#define RED "\e[1;91m"
#define RESET "\033[0m"

class Zombie
{
	private:
	std::string name;

	public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	
	void announce();
	void setName(std::string name);
};

#endif