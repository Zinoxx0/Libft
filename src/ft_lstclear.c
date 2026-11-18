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

void	ft_lstclear(t_list **lst, void (*del)(void *))
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
#include <stdio.h>

// run with valgrind: no leaks
int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(ft_strdup("a"));
	lst->next = ft_lstnew(ft_strdup("b"));
	ft_lstclear(&lst, free);
	printf("%p\n", (void *)lst);  // (nil)
}
*/