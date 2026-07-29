/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:41:16 by knomura           #+#    #+#             */
/*   Updated: 2026/07/29 18:55:20 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat Default Constructor Called\n";
}

void Cat::makeSound()
{
	std::cout << _type << " shout Meooow\n";
}