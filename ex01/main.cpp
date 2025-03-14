/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:32:12 by fcarranz          #+#    #+#             */
/*   Updated: 2024/11/13 11:36:42 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include "Zombie.hpp"

int main( void ) {
	Zombie*	horde;
	int		N = 11;

	horde = zombieHorde( N, "Norm" );
	if ( !horde )
		return 1;
	
	for (int i = 0; i < N; ++i)
		horde[i].announce();

	for (int i = 0; i < N; ++i)
		horde[i].~Zombie();
	
	operator delete[]( horde );
	return 0;
}