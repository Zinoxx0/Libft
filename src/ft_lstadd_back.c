/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:59:42 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 11:59:43 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Adds the element ’new’ at the end(tail) of the list.
void	ft_lstadd_back(t_list **lst, t_list *newvalue)
{
	t_list	*ptrlst;

	if (lst && newvalue)
	{
		if (!*lst)
			*lst = newvalue;
		else
		{
			ptrlst = ft_lstlast(*lst);
			ptrlst->next = newvalue;
		}
	}
}

/*
int main()
{
	t_list *lst;
	t_list *newvalue;
	t_list *newvalue2;
	t_list *newvalue3;
	t_list *ptr;

	lst = ft_lstnew(ft_strdup("first"));
	newvalue = ft_lstnew(ft_strdup("second"));
	newvalue2 = ft_lstnew(ft_strdup("third"));
	newvalue3 = ft_lstnew(ft_strdup("fourth"));
	ft_lstadd_back(&lst, newvalue);
	ft_lstadd_back(&lst, newvalue2);
	ft_lstadd_back(&lst, newvalue3);
	ptr = lst;
	while (ptr)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	ft_lstclear(&lst, free);
}
*/