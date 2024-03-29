/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjung <hyunjung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:33:51 by hyunjung          #+#    #+#             */
/*   Updated: 2022/12/16 15:07:21 by hyunjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << this->type << " Default Construct Called" << std::endl;
}

Animal::Animal(const Animal &ref)
{
	this->type = ref.getType();
	std::cout << "Animal Copy assignment Called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destruct Called" << std::endl;
}

Animal &Animal::operator=(const Animal &ref)
{
	if (this != &ref)
	{
		this->type = ref.getType();
	}
	return *this;
}

std::string Animal::getType() const
{
	return this->type;
}