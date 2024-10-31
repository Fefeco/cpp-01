/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printDiffColor.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:11:30 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/31 20:30:15 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>
#include "colors.hpp"

int printDiffColor( const char* fileName ) {

	std::fstream	diffFile;
	std::string		line;

	diffFile.open( fileName );
	if ( !diffFile.good() )
		return 1;

	while ( std::getline( diffFile, line ) ) {
		switch (line[0])
		{
		case '<':
			std::cout << WRONG;
			break;
		case '>':
			std::cout << SUCCESS;
			break;
		}
		std::cout << line << RST << std::endl;
	}
	
	diffFile.close();
	return 0;	
}