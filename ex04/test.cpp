/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:11:17 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/30 21:37:06 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

#define RST		"\033[0;0m"
#define WRONG	"\033[1;31m"
#define SUCCESS	"\033[1;32m"

void replaceStr( std::fstream& file, std::fstream& newFile, const std::string& s1, const std::string& s2 );

int main( void ) {

	if ( std::system( "make > /dev/null 2>&1" ) != 0 )
	{
		std::cout << WRONG << "Error: your project doesn't compile" << RST << std::endl;
		return 1;
	}
	// std::cout << SUCCESS
	// 		  << 
	return 0;
}