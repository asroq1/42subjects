/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjung <hyunjung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 09:54:13 by hyunjung          #+#    #+#             */
/*   Updated: 2022/07/01 12:11:52 by hyunjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_command(t_stack_data *a, t_stack_data *b)
{
	char	*command;

	command = get_command(0);
	while (command != 0)
	{
		command_bonus(a, b, command);
		free(command);
		command = 0;
		command = get_command(0);
	}
	free(command);
	command = 0;
}

char	*get_command(int fd)
{
	char	*command;
	char	*result;

	command = get_next_line(fd);
	result = ft_strtrim(result, "\n");
	free(command);
	command = NULL;
	return (result);
}

void	command_bonus(t_stack_data *a, t_stack_data *b, char *command)
{
	if (compare_command(command, "sa") == 0)
		sa(a);
	else if (compare_command(command, "sb") == 0)
		sb(b);
	else if (compare_command(command, "ss") == 0)
		ss(a, b);
	else if (compare_command(command, "pa") == 0)
		pa(a, b);
	else if (compare_command(command, "pb") == 0)
		pb(a, b);
	else if (compare_command(command, "ra") == 0)
		ra(a);
	else if (compare_command(command, "rb") == 0)
		rb(b);
	else if (compare_command(command, "rr") == 0)
		rr(a, b);
	else if (compare_command(command, "rra") == 0)
		rra(a);
	else if (compare_command(command, "rrb") == 0)
		rrb(b);
	else if (compare_command(command, "rrr") == 0)
		rrr(a, b);
}

void	print_result(t_stack_data *a, t_stack_data *b)
{
	if (b->length != 0 && check_input(a))
	{
		free(a->arr);
		free(b->arr);
		ft_putstr_fd("OK\n", 1);
		exit(0);
	}
	else
	{
		free(a->arr);
		free(b->arr);
		ft_putstr_fd("KO\n", 1);
		exit(1);
	}
}

int	main(int argc, char *argv[])
{
	t_stack_data	a;
	t_stack_data	b;

	if (argc < 2)
	{
		exit (1);
	}
	get_stack(&a);
	input_validater(&a, argv);
	get_b(&b, a.total);
	check_command(&a, &b);
	print_result(&a, &b);
}
