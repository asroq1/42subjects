/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: hyunjung <hyunjung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:17:27 by hyunjung          #+#    #+#             */
/*   Updated: 2022/12/13 15:28:17 by hyunjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();

	FragTrap &operator=(const FragTrap &ref);
	void highFivesGuys(void);
};

#endif
=======
/*   By: hyunjung <hyunjung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:35:20 by hyunjung          #+#    #+#             */
/*   Updated: 2022/12/05 18:35:21 by hyunjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

>>>>>>> e3f6eb98eedb67ea9e9aba103d97d83045846638
