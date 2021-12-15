/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjung <hyunjung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:37:32 by hyunjung          #+#    #+#             */
/*   Updated: 2021/12/15 16:08:58 by hyunjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h";

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == 0 || del == 0)
	{
		return ;
	}
	del(lst->content);
	free(lst);
}
