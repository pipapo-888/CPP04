/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:41:30 by knomura           #+#    #+#             */
/*   Updated: 2026/07/30 11:30:28 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << "Dog Default Constructor Called\n";
}

Dog::Dog(const Dog &obj)
{
	_type = obj._type;
	std::cout << "Dog Copy Constructor Called\n";
}

Dog &Dog::operator=(const Dog &obj)
{
	_type = obj._type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called\n";
}

void Dog::makeSound() const
{
	std::cout << _type << " shout Woof\n";
}
