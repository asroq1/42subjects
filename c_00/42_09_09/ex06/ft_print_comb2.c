/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjung <hyunjung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:41:52 by hyunjung          #+#    #+#             */
/*   Updated: 2021/09/12 23:16:00 by hyunjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	comb_two(char i, char j)
{
	char	first_units;
	char	first_tens;
	char	second_tens;
	char	second_units;

	first_units = 48 + (i % 10);
	first_tens = 48 + (i / 10);
	second_units = 48 + (j % 10);
	second_tens = 48 + (j / 10);
	ft_putchar(first_tens);
	ft_putchar(first_units);
	ft_putchar(' ');
	ft_putchar(second_tens);
	ft_putchar(second_units);
	ft_putchar(',');
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = 0;
		while (j <= 99)
		{
			comb_two(i, j);
			j++;
		}
		i++;
	}
}
