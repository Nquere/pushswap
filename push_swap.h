/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/14 11:57:51 by nquere            #+#    #+#             */
/*   Updated: 2014/05/15 13:09:30 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	int				elem;
	struct s_list	*next;
}					t_list;

typedef struct		s_tab
{
	t_list			*l_a;
	t_list			*l_b;
	int				max_a;
	int				max_b;
}					t_tab;

t_tab				init_tab(void);
t_list				*ft_lstnew(int elem);
void				ft_lstadd(t_list **list, t_list *new);
int					ft_lstdel(t_list **list);
void				push_to_b(t_tab *tab);
void				swap(t_list **list);
void				push_to_a(t_tab *tab);
int					list_sort(t_list *list);
void				push_all_to_a(t_tab *tab);
int					ft_atoi(const char *str);
int					ft_isdigit(int c);

#endif
