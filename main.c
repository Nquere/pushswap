/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/13 22:25:15 by nquere            #+#    #+#             */
/*   Updated: 2014/05/15 15:49:52 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	fill_tab(t_tab *tab, int ac, char **av)
{
	while (ac-- > 1)
	{
		ft_lstadd(&(tab->l_a), ft_lstnew(ft_atoi(av[ac])));
		(tab->max_a)++;
	}
}

int			main(int ac, char **av)
{
	t_tab		*tab;

	if (ac == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	tab = (t_tab *)malloc(sizeof(t_tab));
	*tab = init_tab();
	fill_tab(tab, ac, av);
	if (tab->max_a >= 2 && (tab->l_a)->elem > ((tab->l_a)->next)->elem)
		swap(&(tab->l_a));
	while (!list_sort(tab->l_a))
	{
		push_to_b(tab);
		swap(&(tab->l_a));
		push_to_a(tab);
	}
	push_all_to_a(tab);
	write(1, "\n", 1);
	return (0);
}
