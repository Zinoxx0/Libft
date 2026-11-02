/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:59:38 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 11:59:39 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Adds the element ’new’ at the beginning(head) of the list.
void	ft_lstadd_front(t_list **lst, t_list *newvalue)
{
	if (lst && newvalue)
	{
		newvalue->next = *lst;
		*lst = newvalue;
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
	ft_lstadd_front(&lst, newvalue);
	ft_lstadd_front(&lst, newvalue2);
	ft_lstadd_front(&lst, newvalue3);
	ptr = lst;
	while (ptr)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	ft_lstclear(&lst, free);
}
*/