/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:59:33 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 11:59:34 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void	*))
{
	t_list	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

/*
int main()
{
	t_list *lst;
	t_list *newvalue;
	t_list *newvalue2;
	t_list *newvalue3;

	lst = ft_lstnew(ft_strdup("first"));
	newvalue = ft_lstnew(ft_strdup("second"));
	newvalue2 = ft_lstnew(ft_strdup("third"));
	newvalue3 = ft_lstnew(ft_strdup("fourth"));
	ft_lstadd_back(&lst, newvalue);
	ft_lstadd_back(&lst, newvalue2);
	ft_lstadd_back(&lst, newvalue3);
	ft_lstclear(&lst, free);
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}
*/