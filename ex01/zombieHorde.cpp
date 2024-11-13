/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:54:31 by fcarranz          #+#    #+#             */
/*   Updated: 2024/11/13 11:31:36 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	if ( N <= 0 || name.empty() )
		return NULL;

	Zombie* horde = static_cast<Zombie*>( operator new[]( sizeof( Zombie ) * N ) );
	
	for ( int i = 0; i < N; ++i ) {
		new ( &horde[i] ) Zombie( name );
	}
	
	return horde;
}
