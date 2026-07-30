/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:50:20 by knomura           #+#    #+#             */
/*   Updated: 2026/07/30 20:44:43 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	Animal *animals[10];

	for (int i = 0; i < 5; i++)
	{
		animals[i * 2] = new Dog();
		animals[i * 2 + 1] = new Cat();
	}

	std::cout << "--------- Check Destructor Order -----------" <<  std::endl;

	for (int i = 0; i < 10; i++)
		delete animals[i];

	std::cout << "--------- Check Copy -----------" <<  std::endl;
	
	

	Cat c1;

	std::cout << std::endl;

	const Animal *j = new Dog();

	std::cout << std::endl;

	const Animal *i = new Cat();

	std::cout << std::endl;

	delete j;
	delete i;

	return (0);
}