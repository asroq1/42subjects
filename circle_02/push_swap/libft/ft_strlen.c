/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjung <hyunjung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:31:21 by hyunjung          #+#    #+#             */
/*   Updated: 2022/07/01 17:26:38 by hyunjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;
	size_t	cnt;

	cnt = 0;
	i = 0;
	while (str[i] != 0)
	{
		i++;
		cnt++;
	}
	return (cnt);
}
