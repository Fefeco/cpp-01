/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:06:24 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/29 13:06:35 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main( void )
{
	{
		Weapon club = Weapon( "crude spiked club" );
		
		HumanA bob( "Bob", club );
		bob.attack();
		club.setType( "some other type of club" );
		bob.attack();
	}
	{
		Weapon club = Weapon( "crude spiked club" );
		
		HumanB jim( "Jim" );
		// jim.setWeapon( club );
		jim.attack();
		club.setType( "some other type of club" );
		jim.attack();
	}
	
	return 0;
}
