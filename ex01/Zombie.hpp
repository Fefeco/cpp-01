/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:41:35 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/28 10:42:12 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Zombie {
	
public:

	Zombie( std::string zombieName );
	~Zombie( void );
	
	void announce( void );

	
private:
	
	std::string name;
};