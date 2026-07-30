/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:41:16 by knomura           #+#    #+#             */
/*   Updated: 2026/07/30 11:30:14 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << "Cat Default Constructor Called\n";
}

Cat::Cat(const Cat &obj)
{
	_type = obj._type;
	std::cout << "Cat Copy Constructor Called\n";
}

Cat &Cat::operator=(const Cat &obj)
{
	_type = obj._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called\n";
}

void Cat::makeSound() const
{
	std::cout << _type << " shout Meooow\n";
}

