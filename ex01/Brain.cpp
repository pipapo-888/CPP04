/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 15:14:45 by knomura           #+#    #+#             */
/*   Updated: 2026/07/30 16:46:24 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor Called\n";
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain Copy Constructor Called\n";
}

Brain &Brain::operator=(const Brain &obj)
{
	std::string strs[100];
	strs = obj.ideas;
	ideas = obj.ideas;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called\n";
}