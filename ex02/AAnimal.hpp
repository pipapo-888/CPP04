/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:51:03 by knomura           #+#    #+#             */
/*   Updated: 2026/08/19 17:00:24 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

class AAnimal
{
protected:
	std::string _type;

public:
	AAnimal();
	AAnimal(const AAnimal &obj);
	AAnimal &operator=(const AAnimal &obj);
	virtual ~AAnimal();

	virtual void makeSound() const = 0;
	std::string getType() const;
};

#endif
