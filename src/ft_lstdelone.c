/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:59:29 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 11:59:30 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

/*
int main()
{
	t_list *lst;
	t_list *newvalue;
	t_list *newvalue2;
	t_list *newvalue3;
	t_list *next;

	lst = ft_lstnew(ft_strdup("first"));
	newvalue = ft_lstnew(ft_strdup("second"));
	newvalue2 = ft_lstnew(ft_strdup("third"));
	newvalue3 = ft_lstnew(ft_strdup("fourth"));
	ft_lstadd_back(&lst, newvalue);
	ft_lstadd_back(&lst, newvalue2);
	ft_lstadd_back(&lst, newvalue3);
	next = lst->next;
	ft_lstdelone(lst, free);
	lst = next;
	while (next)
	{
		printf("%s\n", (char *)next->content);
		next = next->next;
	}
	ft_lstclear(&lst, free);
}
*/