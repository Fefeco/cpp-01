/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceLine.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:46:20 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/30 14:54:02 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

std::string	replaceLine( const std::string& line, const std::string& s1, const std::string& s2 ) {

	if ( !s1.length() )
		return line;

	std::string	newLine;
	size_t		i		= 0;
	std::string	substr	= line.substr( i, i + s1.length() );

	while ( i + s1.length() <= line.length() ) {

		if ( substr.compare( s1 ) == 0 ) {
			newLine += s2;
			i += s1.length();
		}
		else
			newLine += line.at( i++ );

		substr = line.substr( i, s1.length() );
	}

	if ( i < line.length() )
		newLine += line.substr( i, line.length() - i );
	
	return newLine;
}