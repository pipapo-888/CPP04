/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 13:59:01 by knomura           #+#    #+#             */
/*   Updated: 2026/08/22 13:59:02 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{

public:
	Cure();
	Cure(const Cure &obj);
	Cure &operator=(const Cure &obj);
	~Cure();

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif
