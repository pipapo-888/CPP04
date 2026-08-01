/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:50:20 by knomura           #+#    #+#             */
/*   Updated: 2026/08/01 15:09:12 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{	
	// AAnimal cannotMakeAbstractClass;

	AAnimal *animals[10];

	for (int i = 0; i < 5; i++)
	{
		animals[i * 2] = new Dog();
		animals[i * 2 + 1] = new Cat();
	}

	for (int i = 0; i < 10; i++)
    animals[i]->makeSound();


	std::cout << "--------- Check Destructor Order -----------" <<  std::endl;

	for (int i = 0; i < 10; i++)
		delete animals[i];

	std::cout << "--------- Deep Copy Check -----------" << std::endl;

	Dog dogOriginal;
	dogOriginal.getBrain()->setIdea(0, "original idea");

	Dog dogCopyCtor(dogOriginal);
	Dog dogCopyAssign;
	dogCopyAssign = dogOriginal;

	std::cout << "dogOriginal  brain address: " << dogOriginal.getBrain() << std::endl;
	std::cout << "dogCopyCtor  brain address: " << dogCopyCtor.getBrain() << std::endl;
	std::cout << "dogCopyAssign brain address: " << dogCopyAssign.getBrain() << std::endl;

	dogOriginal.getBrain()->setIdea(0, "changed after copy");
	std::cout << "dogOriginal idea[0] changed to: " << dogOriginal.getBrain()->getIdea(0) << std::endl;
	std::cout << "dogCopyCtor idea[0]   (should be unaffected): " << dogCopyCtor.getBrain()->getIdea(0) << std::endl;
	std::cout << "dogCopyAssign idea[0] (should be unaffected): " << dogCopyAssign.getBrain()->getIdea(0) << std::endl;

	return (0);
}