/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 20:26:11 by knomura           #+#    #+#             */
/*   Updated: 2026/08/22 13:56:00 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string _type;

public:
	AMateria();
	AMateria(const std::string &type);
	AMateria(const AMateria &obj);
	AMateria &operator=(const AMateria &obj);
	~AMateria();

	const std::string &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif