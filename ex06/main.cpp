/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:31:25 by fcarranz          #+#    #+#             */
/*   Updated: 2024/11/01 21:45:51 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

int setLevel( std::string filterWord ) {

    std::string filter[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    for (int i = 0; i < 4; ++i ) {
        if ( filter[i].compare( filterWord ) == 0 )
            return i;
    }
    
    return -1;
}

int main( int argc, char** argv ) {

    if ( argc > 2 ) {
        std::cout << ERROR << "Error: to meny arguments" << RST << std::endl;
        return 1;
    }

    int filterLevel = 0;
    if ( argc == 2 )
        filterLevel = setLevel( std::string( argv[1] ) );

    Harl    harl;

    switch ( filterLevel )
    {
    case 0:
        harl.complain("DEBUG");
    case 1:
        harl.complain("INFO");
    case 2:
        harl.complain("WARNING");
    case 3:
        harl.complain("ERROR");
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

    return 0;
}