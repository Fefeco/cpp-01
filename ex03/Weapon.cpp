/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:21:17 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/28 13:36:00 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
	: _type( type )
{
}

Weapon::~Weapon( void )
{
}

const std::string&	Weapon::getType( void ) {
	return this->_type;
}

void Weapon::setType( std::string weaponType ) {
	this->_type = weaponType;
}