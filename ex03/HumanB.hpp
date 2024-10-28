/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:13:27 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/28 13:35:17 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"

class HumanB : public HumanA {

public:

	HumanB( std::string name );
	~HumanB( void );
	void setWeapon( Weapon* weaponType );
};