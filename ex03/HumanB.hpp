/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:13:27 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/29 12:46:55 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Weapon.hpp"

class HumanB {

public:

	HumanB( std::string name );
	~HumanB( void );
	
	void attack( void );
	void setWeapon( Weapon& weaponType );


private:

	std::string _name;
	Weapon*		_weaponType;
};