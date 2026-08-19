/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 15:18:21 by knomura           #+#    #+#             */
/*   Updated: 2026/08/19 16:55:19 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "WrongCat Default Constructor Called\n";
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	std::cout << "WrongCat Copy Constructor Called\n";
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	WrongAnimal::operator=(obj);
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called\n";
}

void WrongCat::wrongMakeSound() const
{
	std::cout << _type << " shout Meooow\n";
}
