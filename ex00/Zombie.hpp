/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:53:03 by luifer            #+#    #+#             */
/*   Updated: 2024/11/08 13:46:37 by luifer           ###   ########.fr       */
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
	Zombie(std::string name);
	~Zombie();
	void announce();
};

#endif