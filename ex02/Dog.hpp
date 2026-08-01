/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:50:34 by knomura           #+#    #+#             */
/*   Updated: 2026/07/30 17:03:13 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *_brain;

public:
	Dog();
	Dog(const Dog &obj);
	Dog &operator=(const Dog &obj);
	~Dog();

	void makeSound() const;
	Brain *getBrain() const;
};

#endif