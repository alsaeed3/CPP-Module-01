/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 03:43:28 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/10 03:56:16 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main ( void ) {

	/* Zombie on the Stack Memory */
	Zombie	stackZombie("stackZombie");
	stackZombie.announce();

	/* Zombie on the Heap Memory */
	Zombie	*heapZombie = new Zombie("heapZombie");
	heapZombie->announce();
	delete heapZombie;

	/* Zombie on the Heap Memory using newZombie function */
	Zombie	*heapZombie2 = newZombie("newZombie");
	delete heapZombie2;

	/* Zombie on the Heap Memory using randomChump function */
	randomChump("randomChump");
	
	std::cout << std::endl;
	
	return 0;
}