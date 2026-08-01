/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:51:03 by knomura           #+#    #+#             */
/*   Updated: 2026/07/30 14:04:10 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
protected:
	std::string _type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &obj);
	WrongAnimal &operator=(const WrongAnimal &obj);
	~WrongAnimal();

	void wrongMakeSound() const;
	std::string getType() const;
};

#endif