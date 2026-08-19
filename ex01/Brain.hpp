/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 15:14:24 by knomura           #+#    #+#             */
/*   Updated: 2026/08/19 16:55:00 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain &obj);
	Brain &operator=(const Brain &obj);
	~Brain();

	void setIdea(int index, const std::string &idea);
	std::string getIdea(int index) const;
};

#endif
