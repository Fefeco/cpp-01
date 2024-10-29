/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:46:58 by fcarranz          #+#    #+#             */
/*   Updated: 2024/10/29 12:55:38 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main( void ) {
	
	std::string		ex02 = "HI THIS IS BRAIN";
	std::string*	stringPTR = &ex02;
	std::string&	stringREF = ex02;

	std::cout << "The memory address of the string variable:	[" << &ex02 << "]" << std::endl;
	std::cout << "The memory address held by stringPTR: 		[" << stringPTR << "]" << std::endl;
	std::cout << "The memory address held by stringREF: 		[" << &stringREF << "]" << std::endl;

	std::cout << "The value of the string variable: 		[" << ex02 << "]" << std::endl;
	std::cout << "The value pointed to by stringPTR: 		[" << *stringPTR << "]" << std::endl;
	std::cout << "The value pointed to by stringREF: 		[" << stringREF << "]" << std::endl;
	
	return 0;
}
