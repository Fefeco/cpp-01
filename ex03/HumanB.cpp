/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:36:45 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/29 13:07:04 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB( std::string name )
	: _name( name ), _weaponType ( NULL )
{
}

HumanB::~HumanB( void )
{
}

void HumanB::attack( void ) {
	std::cout << this->_name;
	if ( !this->_weaponType )
		std::cout << " doesn't have weapon to attack." << std::endl;
	else
	{
		std::cout  << " attacks with their " 
			  	   << this->_weaponType->getType()
			  	   << std::endl;
	}
}

void HumanB::setWeapon( Weapon& weaponType ) {
	this->_weaponType = &weaponType;
}
