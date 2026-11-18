/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:59:16 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 11:59:17 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*node;
	void	*content;

	if (!f || !del)
		return (NULL);
	newlist = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, node);
		lst = lst->next;
	}
	return (newlist);
}

/*
#include <stdio.h>

void	*shout(void *s)
{
	return (ft_strjoin(s, "!"));
}

int	main(void)
{
	t_list	*lst;
	t_list	*map;

	lst = ft_lstnew("hi");
	lst->next = ft_lstnew("yo");
	map = ft_lstmap(lst, shout, free);
	printf("%s\n", (char *)map->content);        // hi!
	printf("%s\n", (char *)map->next->content);  // yo!
	ft_lstclear(&map, free);
	free(lst->next);
	free(lst);
}
*/