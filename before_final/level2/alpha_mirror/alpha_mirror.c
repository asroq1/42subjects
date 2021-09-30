/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjung <hyunjung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 11:08:53 by hyunjung          #+#    #+#             */
/*   Updated: 2021/09/30 16:09:07 by hyunjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	
	while (av[1][i] != 0)
	{
		//차이값이 음수라면 z에서 av[1][i]값은 빼줘야 한다.
		//반대로 차이값이 양수라면 a에서 더해줘야 한다.
		if (av[1][i] >= 'a' && av[1][i] <= 'm')
		{
			av[1][i] = 'z' - (av[1][i] - 'a');
		}
		else if(av[1][i] >= 'A' && av[1][i] <= 'M')
		{
			av[1][i] = 'Z' - (av[1][i] - 'A');
		}
		else if(av[1][i] >= 'N' && av[1][i] <= 'Z')
		{
			av[1][i] = 'A' + ( 'Z' - av[1][i]);
		}
		else if(av[1][i] >= 'n' && av[1][i] <= 'z')
		{
			av[1][i] = 'a' + ( 'z' - av[1][i]);
		}
		write(1, &av[1][i], 1);
		i++;
	}
	
}