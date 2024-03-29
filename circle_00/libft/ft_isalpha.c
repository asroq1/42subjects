/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjung <hyunjung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:45:35 by hyunjung          #+#    #+#             */
/*   Updated: 2021/12/17 16:07:24 by hyunjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int arg)
{
	if (arg >= 65 && arg <= 90)
	{
		return (1);
	}
	else if (arg >= 97 && arg <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
