/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/15 12:17:57 by nquere            #+#    #+#             */
/*   Updated: 2014/05/15 15:49:49 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b(t_tab *tab)
{
	while ((tab->l_a)->elem < ((tab->l_a)->next)->elem)
	{
		write(1, "pb ", 3);
		(tab->max_a)--;
		ft_lstadd(&(tab->l_b), ft_lstnew(ft_lstdel(&(tab->l_a))));
		(tab->max_b)++;
	}
}

void	swap(t_list **list)
{
	t_list	*elem;

	write(1, "sa ", 3);
	elem = (*list)->next;
	(*list)->next = ((*list)->next)->next;
	elem->next = (*list);
	(*list) = elem;
}

void	push_to_a(t_tab *tab)
{
	while ((tab->l_b) != NULL && (tab->l_a)->elem < ((tab->l_b)->elem))
	{
		write(1, "pa ", 3);
		(tab->max_a)++;
		ft_lstadd(&(tab->l_a), ft_lstnew(ft_lstdel(&(tab->l_b))));
		(tab->max_b)++;
		swap(&(tab->l_a));
	}
}

int		list_sort(t_list *list)
{
	t_list	*elem;

	elem = list;
	while (elem->next != NULL)
	{
		if (elem->elem > (elem->next)->elem)
			return (0);
		elem = elem->next;
	}
	return (1);
}

void	push_all_to_a(t_tab *tab)
{
	int			i;

	i = 1;
	while ((tab->l_b) != NULL)
	{
		if (i > 1)
			write(1, " pa", 3);
		else
			write(1, "pa", 2);
		(tab->max_a)++;
		ft_lstadd(&(tab->l_a), ft_lstnew(ft_lstdel(&(tab->l_b))));
		(tab->max_b)--;
		i++;
	}
}
