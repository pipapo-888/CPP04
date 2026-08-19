/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:40:56 by knomura           #+#    #+#             */
/*   Updated: 2026/08/19 16:55:13 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Default WrongAnimal")
{
	std::cout << "WrongAnimal Default Constructor Called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) : _type(obj._type)
{
	std::cout << "WrongAnimal Copy Constructor Called\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	_type = obj._type;
	return *this;
}

void WrongAnimal::wrongMakeSound() const
{
	std::cout << _type << " Sound\n";
}

std::string WrongAnimal::getType() const
{
	return (_type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor Called\n";
}
