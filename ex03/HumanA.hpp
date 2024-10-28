/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:13:27 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/28 13:34:44 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Weapon.hpp"

class HumanA {

public:

	HumanA( std::string name, Weapon& weaponType );
	~HumanA( void );
	void attack( void );


protected:

	std::string _name;
	Weapon&		_weaponType;
};