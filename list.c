/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/15 12:06:34 by nquere            #+#    #+#             */
/*   Updated: 2014/05/15 12:11:07 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int elem)
{
	t_list	*tab;

	if (NULL == (tab = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	tab->elem = elem;
	tab->next = NULL;
	return (tab);
}

void	ft_lstadd(t_list **list, t_list *new)
{
	if (*list == NULL)
	{
		*list = new;
		new->next = NULL;
	}
	else
	{
		new->next = *list;
		*list = new;
	}
}

int		ft_lstdel(t_list **list)
{
	int		ret;
	t_list	*tab;

	ret = (*list)->elem;
	tab = *list;
	(*list) = (*list)->next;
	free(tab);
	return (ret);
}
