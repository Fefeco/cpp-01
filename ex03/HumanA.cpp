/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:14:38 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/28 13:34:52 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weaponType )
	: _name( name ), _weaponType( weaponType )
{
}

HumanA::~HumanA( void )
{
}

void HumanA::attack( void ) {
	std::cout << this->_name 
			  << " attacks with their " 
			  << this->_weaponType.getType()
			  << std::endl;
}