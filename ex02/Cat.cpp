/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:41:16 by knomura           #+#    #+#             */
/*   Updated: 2026/07/30 21:00:25 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_brain = new Brain;
	_type = "Cat";
	std::cout << "Cat Default Constructor Called\n";
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	_brain = new Brain(*obj._brain);
	std::cout << "Cat Copy Constructor Called\n";
}

Cat &Cat::operator=(const Cat &obj)
{
	if (this != &obj)
	{	
		Animal::operator=(obj);
		*_brain = *obj._brain;
	}
	return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat Destructor Called\n";
}

void Cat::makeSound() const
{
	std::cout << _type << " shout Meooow\n";
}

Brain *Cat::getBrain() const
{
	return (_brain);
}

