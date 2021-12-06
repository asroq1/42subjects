/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjung <hyunjung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 19:50:57 by hyunjung          #+#    #+#             */
/*   Updated: 2021/12/06 12:46:13 by hyunjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*ptr, int value, size_t n)
{
	size_t			idx;
	unsigned char	*tmp;

	idx = 0;
	tmp = ptr;
	while (n != 0)
	{
		if (*tmp == value)
		{
			return (tmp);
		}
		tmp++;
		idx++;
		n--;
	}
	return (0);
}
