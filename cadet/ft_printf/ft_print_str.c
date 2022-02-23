/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjung <hyunjung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:57:07 by hyunjung          #+#    #+#             */
/*   Updated: 2022/02/23 10:25:23 by hyunjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(const char **str, va_list ap)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = va_arg(ap, char *);
	(*str)++;
	while (tmp[i] != 0)
	{
		write(1, &tmp[i], 1);
		i++;
	}
	return (1);
}

int	ft_print_perc(const char **str)
{
	if (**str == '%')
	{
		write(1, "%", 1);
		(*str)++;
		return (1);
	}
	return (0);
}
