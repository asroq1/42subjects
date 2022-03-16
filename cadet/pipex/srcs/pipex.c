/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjung <hyunjung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:17:32 by hyunjung          #+#    #+#             */
/*   Updated: 2022/03/16 19:26:59 by hyunjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int parentProc()
{

}

int parentProc()
{

}
int	main(int argc, char **argv, char **envp)
{
	pid_t	pid;
	int		fd[2];

	proc = fork();
	pid = pipe(pid);
	if (argc == 5)
	{
		if (pid == -1)
			errorMessage();
		pid = pork();
		if (pid == -1)
			errorMessage();
		if (pid == 1)
		{
			childProc();
		}
		waitpid();
		parentProc();
	}
	else
	{

	}
	return (0);
}
