/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:41:16 by knomura           #+#    #+#             */
/*   Updated: 2026/07/30 11:30:14 by knomura          ###   ########.fr       */
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
