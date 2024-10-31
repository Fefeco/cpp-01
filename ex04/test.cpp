/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:11:17 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/31 20:39:09 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "colors.hpp"

void replaceStr( std::fstream& file, std::fstream& newFile, const std::string& s1, const std::string& s2 );
int printDiffColor( const char* fileName );

int main( void ) {

	std::system( "clear" );

	std::cout << std::setw( 70 ) << std::left << "Testing compile..." << std::flush;
	if ( WEXITSTATUS( std::system( "sleep 1 && make > /dev/null 2>&1" ) ) != 0 )
	{
		std::cout << WRONG << "[𐄂]" << std::endl
				  << "Error: your project doesn't compile" << RST << std::endl;
		return 1;
	} else {
		std::cout << SUCCESS << "[✓]" <<  RST << std::endl;
	}

	std::cout << std::setw( 70 ) << "Testing wrong number of arguments..." << std::flush;
	if ( WEXITSTATUS( std::system( "sleep 1 && ./ex04 Makefile  > /dev/null 2>&1" ) ) != 1 ) {
		std::cout << WRONG << "[𐄂]"<< RST  << std::endl;
	} else {
		std::cout << SUCCESS << "[✓]" <<  RST << std::endl;
	}

	std::cout << std::setw( 70 ) << "Testing no filename provided..." << std::flush;
	if ( WEXITSTATUS( std::system( "sleep 1 && ./ex04 '' '-MMD' '' > /dev/null 2>&1" ) ) != 2 ) {
		std::cout << WRONG << "[𐄂]"<< RST  << std::endl;
	} else {
		std::cout << SUCCESS << "[✓]" <<  RST << std::endl;
	}

	std::cout << std::setw( 70 ) << "Testing replace nothing ( '' ) for \"something\"..." << std::flush;
	if ( WEXITSTATUS( std::system( "sleep 1 && ./ex04 Makefile '' somthing && diff Makefile Makefile.replace > testFile" ) ) != 0 ) {
		std::cout << WRONG << "[𐄂]"<< RST  << std::endl
				  << "Expected identic file, got diffrences:" << std::endl;
		std::system( "cat testFile" );

	} else {
		std::cout << SUCCESS << "[✓]" <<  RST << std::endl;
	}
	std::system( "rm testFile" );

	std::cout << std::setw( 70 ) << "Testing replace \"-include\" for \"-exclude\"..." << std::flush;
	std::system( "sleep 1 && ./ex04 Makefile -include -exclude && diff Makefile Makefile.replace > testFile" );
	if ( std::system( "diff testFile testFile1 > /dev/null" ) != 1 ) {
		std::cout << WRONG << "[𐄂]"<< RST << std::endl
				  << "\nExpected differences:" << std::endl << std::flush;
		printDiffColor( "testFile1" );
		std::cout << "\nGot:" << std::endl;
		printDiffColor( "testFile" );
	} else {
		std::cout << SUCCESS << "[✓]" <<  RST << std::endl;
	}
	std::system( "rm testFile" );

	return 0;
}