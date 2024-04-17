/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:06:01 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/17 09:59:10 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {

	return;
}

Harl::~Harl( void ) {

	return;
}

void	Harl::debug( void ) {

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;

	return;	
}

void	Harl::info( void ) {

	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;

	return;	
}

void	Harl::warning( void ) {

	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;

	return;	
}

void	Harl::error( void ) {

	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;

	return;	
}

void	Harl::complain( std::string level ) {

	void (Harl::*functions[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string	levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	
	for ( int i = 0; i < 4; i++ ) {

		if (level == levels[i]) {
		
			( this->*functions[i] )();
			break;
		}
	}

	return;
}