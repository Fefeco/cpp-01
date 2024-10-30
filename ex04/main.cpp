/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:14:35 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/30 14:43:25 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string	replace_line( const std::string& line, const std::string& s1, const std::string& s2 ) {

	size_t	i = 0;
	std::string newLine;
	std::string	substr = line.substr( i, i + s1.length() );

	if ( !s1.length() )
		return line;

	while ( i + s1.length() <= line.length() ) {
		if ( substr.compare( s1 ) == 0 ) {
			newLine += s2;
			i += s1.length();
		}
		else
			newLine += line.at( i++ );
		substr = line.substr( i, s1.length() );
	}

	if ( i < line.length() ) {
		newLine += line.substr( i, line.length() - i );
	}
	return newLine;
}

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
		newFile << replace_line(line, std::string( argv[2] ), std::string( argv[3] )) << std::endl;;
	}

	file.close();
	newFile.close();
	return 0;
}