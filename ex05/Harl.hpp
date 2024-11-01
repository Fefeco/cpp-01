/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:25:14 by fcarranz          #+#    #+#             */
/*   Updated: 2024/11/01 18:57:57 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

#define RST		"\033[0;0m"
#define DEBUG	"\033[0;38;5;8m"
#define INFO	"\033[0;96m"
#define WARNING "\033[0;93m"
#define ERROR	"\033[0;91m"

class Harl {

public:

	Harl( void );
	~Harl( void );
	void complain( std::string level );


private:

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};