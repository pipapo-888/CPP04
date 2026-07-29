/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:40:56 by knomura           #+#    #+#             */
/*   Updated: 2026/07/29 20:54:40 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal() : _type("Default Animal")
{
	std::cout << "Animal Default Constructor Called\n";
}

Animal::Animal(const Animal &obj) : _type(obj._type)
{
	std::cout << "Animal Copy Constructor Called\n";
}

Animal &Animal::operator=(const Animal &obj)
{
	_type = obj._type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << _type << " Sound\n";
}

std::string Animal::getType() const
{
	return (_type);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called\n";
}
