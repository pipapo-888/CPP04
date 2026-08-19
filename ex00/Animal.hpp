/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:51:03 by knomura           #+#    #+#             */
/*   Updated: 2026/08/19 16:37:57 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
protected:
	std::string _type;

public:
	Animal();
	Animal(const Animal &obj);
	Animal &operator=(const Animal &obj);
	virtual ~Animal();

	virtual void makeSound() const;
	std::string getType() const;
};

#endif
