/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:31:25 by fcarranz          #+#    #+#             */
/*   Updated: 2024/11/01 21:31:02 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main( void ) {
    Harl    harl;

    std::cout << "--- TESTING ---" << std::endl
              << "Harl with warning call"<< std::endl;
    harl.complain("WARNING");

    std::cout << "Harl with info call"<< std::endl;
    harl.complain("INFO");

    std::cout << "Harl with error call"<< std::endl;
    harl.complain("ERROR");

    std::cout << "Harl with debug call"<< std::endl;
    harl.complain("DEBUG");

    std::cout << "Harl with other call"<< std::endl;
    harl.complain("OTHER");

    std::cout << "\n--- END ---" << std::endl;

    return 0;
}