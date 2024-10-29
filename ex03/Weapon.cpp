/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:21:17 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/29 11:27:27 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
	: type( type )
{
}

Weapon::~Weapon( void )
{
}

const std::string&	Weapon::getType( void ) {
	return this->type;
}

void Weapon::setType( std::string weaponType ) {
	this->type = weaponType;
}