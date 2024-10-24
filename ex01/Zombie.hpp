/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:41:35 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/24 18:36:28 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Zombie {
	
public:

	Zombie( std::string zombieName );
	Zombie( void );
	~Zombie( void );
	
	void announce( void );

	
private:
	
	std::string name;
};