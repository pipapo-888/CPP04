/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:41:45 by knomura           #+#    #+#             */
/*   Updated: 2026/07/30 17:02:33 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain *_brain;

public:
	Cat();
	Cat(const Cat &obj);
	Cat &operator=(const Cat &obj);
	~Cat();

	void makeSound() const;
	Brain *getBrain() const;
};

#endif