/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:32:12 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/24 20:55:12 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include "Zombie.hpp"

int main( void ) {
	Zombie* horde;
	int     N = 11;

	horde = zombieHorde( N, "Norm" );
	
	for (int i = 0; i < N; ++i) {
		horde[i].announce();
	}
	
	delete[] horde;
	return 0;
}