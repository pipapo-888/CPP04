/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 15:14:45 by knomura           #+#    #+#             */
/*   Updated: 2026/08/19 17:00:26 by knomura          ###   ########.fr       */
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
	for (int i = 0; i < 100; i++)
		ideas[i] = obj.ideas[i];
	std::cout << "Brain Copy Constructor Called\n";
}

Brain &Brain::operator=(const Brain &obj)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = obj.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called\n";
}

void Brain::setIdea(int index, const std::string &idea)
{
	ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	return ideas[index];
}
