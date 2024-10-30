/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:14:35 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/30 15:14:46 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string	replaceLine( const std::string& line, const std::string& s1, const std::string& s2 );

int main( int argc, char** argv ) {
	
	if ( argc != 4 ) {
		std::cout << "Wrong numbers of arguments" << std::endl;
		return 1;
	}

	if ( !argv[1][0] ) {
		std::cout << "Error: you have to enter a filename" << std::endl;
		return 2;
	}

	// Apertura archivo de lectura
	std::fstream file;
	file.open( argv[1], std::ios::in );
	if ( file.fail() ) {
		std::cout << "Error: fail to open " << argv[1] << " file" << std::endl;
		return 3;
	}

	// Apertura archivo de reemplazo
	std::string		newFileName( std::string( argv[1] ) + ".replace" );
	std::fstream	newFile;
	newFile.open( newFileName.c_str(), std::fstream::out );
	if ( newFile.fail() ) {
		file.close();
		std::cout << "Error: fail to open " << newFileName << " file" << std::endl;
		return 4;
	}

	std::string line;
	while ( !file.eof() )
	{
		std::getline( file, line );
		newFile << replaceLine( line, std::string( argv[2] ), std::string( argv[3] ) )
				<< std::endl;;
	}

	file.close();
	newFile.close();
	return 0;
}