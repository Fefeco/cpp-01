/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceStr.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:53:13 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/30 20:24:13 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

void replaceStr( std::fstream& file, std::fstream& newFile,  const std::string& s1, const std::string& s2 ) {
	
	std::string cmpBuf;
	char		tmpChar;

	while ( file.get( tmpChar ) ) {
		
		cmpBuf += tmpChar;
		if ( cmpBuf.length() < s1.length() )
			continue;

		if ( cmpBuf.compare( s1 ) == 0 ) {
			newFile << s2;
			cmpBuf.clear();
		} else {
			newFile << cmpBuf[0];
			cmpBuf = cmpBuf.substr( 1, s1.length() - 1 );
		}
	}

	if ( !cmpBuf.empty() )
		newFile << cmpBuf;
}
