/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:14:35 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/29 16:11:12 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main( int argc, char** argv ) {
	
	if ( argc != 4 ) {
		std::cout << "Wrong numbers of arguments" << std::endl;
		return 1;
	}
	
	if ( !argv[1][0] ) {
		std::cout << "Error: you have to enter a filename" << std::endl;
		return 2;
	}
	
	std::fstream file;
	file.open( argv[1], std::ios::in );
	if ( file.fail() ) {
		std::cout << "Error: fail to open " << argv[1] << " file" << std::endl;
		return 3;
	}
	
	std::string		newFileName{std::string( argv[1] ) + ".replace"};
	std::fstream	newFile;
	newFile.open( newFileName, std::fstream::out );
	if ( newFile.fail() ) {
		file.close();
		std::cout << "Error: fail to open " << newFileName << " file" << std::endl;
		return 4;
	}
	
	file.close();
	newFile.close();
	return 0;
}