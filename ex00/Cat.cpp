/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:41:16 by knomura           #+#    #+#             */
/*   Updated: 2026/08/19 16:38:00 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << "Cat Default Constructor Called\n";
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout << "Cat Copy Constructor Called\n";
}

Cat &Cat::operator=(const Cat &obj)
{
	Animal::operator=(obj);
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
