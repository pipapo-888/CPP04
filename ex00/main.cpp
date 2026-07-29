/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:50:20 by knomura           #+#    #+#             */
/*   Updated: 2026/07/29 21:06:12 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	// Animal a1;
	// Cat a2;
	// Dog a3;

	// a1.makeSound();
	// a2.makeSound();
	// a3.makeSound();

	// std::cout << "Get Type:" <<  a1.getType() << std::endl;
	// std::cout << "Get Type:" <<  a2.getType() << std::endl;
	// std::cout << "Get Type:" <<  a3.getType() << std::endl;

	delete i;
	delete j;
	delete meta;


	return (0);
}