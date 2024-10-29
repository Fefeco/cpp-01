/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:07:56 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/29 11:28:21 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Weapon {

public:

	Weapon( std::string type );
	~Weapon( void );
	
	const std::string&	getType( void );
	void				setType( std::string weaponType );


private:

	std::string	type;
};
