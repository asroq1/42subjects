/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjung <hyunjung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:43:34 by hyunjung          #+#    #+#             */
/*   Updated: 2022/07/28 13:08:02 by hyunjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

int	init_mutex(t_info *info)
{
	int	i;

	i = 0;
	if (pthread_mutex_init(&info->print, NULL) != 0)
		return (1);
	if (pthread_mutex_init(&info->check_death, NULL) != 0)
		return (1);
	if (pthread_mutex_init(&info->check_last_food, NULL) != 0)
		return (1);
	if (pthread_mutex_init(&info->check_eat_cnt, NULL) != 0)
		return (1);
	info->fork = malloc(sizeof(pthread_mutex_t) * info->cnt_of_philo);
	if (info->fork == 0)
	{
		return (1);
	}
	while (i < info->cnt_of_philo)
	{
		if (pthread_mutex_init(&info->fork[i], NULL) != 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	init_info(t_info *info, int argc, char *argv[], int err)
{
	if (argc != 5 && argc != 6)
		return (print_error("Input counts Error\n", err));
	info->cnt_of_philo = ft_atoi(argv[1]);
	info->time_to_die = ft_atoi(argv[2]);
	info->time_to_eat = ft_atoi(argv[3]);
	info->time_to_sleep = ft_atoi(argv[4]);
	info->time_to_start = get_time();
	info->death = 0;
	if (info->cnt_of_philo <= 0 || info->time_to_die < 0
		|| info->time_to_eat < 0 || info->time_to_sleep < 0)
	{
		return (1);
	}
	if (argc == 6)
	{
		info->cnt_of_must_eat = ft_atoi(argv[5]);
		if (info->cnt_of_must_eat <= 0)
		{
			return (1);
		}
	}
	return (0);
}

int	init_philo(t_info *info, t_philo **philo)
{
	int	i;

	i = 0;
	*philo = malloc(sizeof(t_philo) * info->cnt_of_philo);
	if (philo == NULL)
	{
		return (1);
	}
	while (i < info->cnt_of_philo)
	{
		(*philo)[i].id = i;
		(*philo)[i].info = info;
		(*philo)[i].left = i;
		if ((i + 1) % info->cnt_of_philo == 0)
			(*philo)[i].right = 0;
		else
			(*philo)[i].right = i + 1;
		(*philo)[i].last_food_time = get_time();
		(*philo)[i].cnt_of_eat = 0;
		i++;
	}
	return (0);
}
