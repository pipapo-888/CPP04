/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:41:30 by knomura           #+#    #+#             */
/*   Updated: 2026/07/30 21:09:50 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	_brain = new Brain;
	_type = "Dog";
	std::cout << "Dog Default Constructor Called\n";
}

Dog::Dog(const Dog &obj) : AAnimal(obj)
{
	_brain = new Brain(*obj._brain);
	std::cout << "Dog Copy Constructor Called\n";
}

Dog &Dog::operator=(const Dog &obj)
{
	if (this != &obj)
	{	
		AAnimal::operator=(obj);
		*_brain = *obj._brain;
	}
	return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog Destructor Called\n";
}

void Dog::makeSound() const
{
	std::cout << _type << " shout Woof\n";
}

Brain *Dog::getBrain() const
{
	return (_brain);
}
