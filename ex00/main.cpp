/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:04:09 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/24 13:37:55 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"
#include <string>

int main( void ) {
	Zombie* ZombieX;
	
	ZombieX = newZombie( "Zombie1" );
	ZombieX->announce();
	delete ZombieX;
	ZombieX = newZombie( "Zombie2" );
	ZombieX->announce();
	delete ZombieX;
	ZombieX = newZombie( "Zombie3" );
	ZombieX->announce();
	delete ZombieX;
	randomChump( "Zombie4" );
	randomChump( "Zombie5" );
	return 0;
}