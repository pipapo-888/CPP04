/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:40:56 by knomura           #+#    #+#             */
/*   Updated: 2026/08/01 15:04:15 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Default Animal")
{
	std::cout << "AAnimal Default Constructor Called\n";
}

AAnimal::AAnimal(const AAnimal &obj) : _type(obj._type)
{
	std::cout << "AAnimal Copy Constructor Called\n";
}

AAnimal &AAnimal::operator=(const AAnimal &obj)
{
	_type = obj._type;
	return *this;
}

std::string AAnimal::getType() const
{
	return (_type);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor Called\n";
}
