/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:25:06 by fcarranz          #+#    #+#             */
/*   Updated: 2024/11/01 21:38:05 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

Harl::Harl( void ) {}

Harl::~Harl( void ) {}

void Harl::complain( std::string level) {
    
    std::string funcNames[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    void        (Harl::*func[4])( void );

    func[0] = &Harl::debug;
    func[1] = &Harl::info;
    func[2] = &Harl::warning;
    func[3] = &Harl::error;

    for ( int i = 0; i < 4; ++i ) {
        if ( funcNames[i].compare( level ) == 0 )
            ( this->*func[i] )();
    }
}

void Harl::debug( void ) {
    std::cout << "[ DEBUG ]"
              << DEBUG
              << std::endl
              << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!"
              << RST << std::endl << std::endl;
}

void Harl::info ( void ) {
    std::cout << "[ INFO ]"
              << INFO
              << std::endl
              << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger!\nIf you did, I wouldn't be asking for more!"
              << RST << std::endl << std::endl;
}

void Harl::warning ( void ) {
    std::cout << "[ WARNING ]"
              << WARNING
              << std::endl
              << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month."
              << RST << std::endl << std::endl;
}

void Harl::error ( void ) {
    std::cout << "[ ERROR ]"
              << ERROR
              << std::endl
              << "This is unacceptable! I want to speak to the manager now."
              << RST << std::endl << std::endl;
}