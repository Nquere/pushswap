/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/16 13:43:11 by nquere            #+#    #+#             */
/*   Updated: 2014/05/15 12:52:20 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_atoi(const char *str)
{
	int		length;
	int		sign;
	int		rest;

	sign = 1;
	rest = 0;
	while (((str[0] <= 13) && (str[0] >= 9)) || (str[0] == ' '))
		str++;
	if ((str[0] == '-') || (str[0] == '+'))
	{
		if (str[0] == '-')
			sign = -1;
		str++;
	}
	length = 0;
	while ((ft_isdigit(str[length]) == 1) && (str[length] != '\0'))
	{
		rest = (rest * 10) + (str[length] - '0');
		length++;
	}
	return (sign * rest);
}
