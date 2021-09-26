/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjung <hyunjung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 23:30:31 by hyunjung          #+#    #+#             */
/*   Updated: 2021/09/26 20:29:33 by hyunjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*new_src;

	i = 0;
	new_src = malloc(sizeof(char) * ft_strlen(src) + 1);
	while (src[i] != '\0')
	{
		new_src += src[i];
		i++;
	}
	new_src[i] = '\0';
	return (new_src);
}
