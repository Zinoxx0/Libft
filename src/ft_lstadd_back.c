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
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptrlst;

	if (lst && new)
	{
		if (!*lst)
			*lst = new;
		else
		{
			ptrlst = ft_lstlast(*lst);
			ptrlst->next = new;
		}
	}
}

/*
#include <stdio.h>

int	main(void)
{
	t_list	*lst;

	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew("a"));
	ft_lstadd_back(&lst, ft_lstnew("b"));
	printf("%s\n", (char *)lst->content);        // a
	printf("%s\n", (char *)lst->next->content);  // b
	free(lst->next);
	free(lst);
}
*/