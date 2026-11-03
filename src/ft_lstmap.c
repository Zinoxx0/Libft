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

t_list	*ft_lstmap(t_list *lst, void	*(*f)(void *), void (*del)(void *))
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
void	*upper_copy(void *content)
{
	char	*copy;
	int		i;

	copy = ft_strdup(content);
	if (!copy)
		return (NULL);
	i = 0;
	while (copy[i])
	{
		copy[i] = ft_toupper(copy[i]);
		i++;
	}
	return (copy);
}

int main()
{
	t_list *lst;
	t_list *newvalue;
	t_list *newvalue2;
	t_list *newvalue3;
	t_list *mapped;
	t_list *ptr;

	lst = ft_lstnew(ft_strdup("first"));
	newvalue = ft_lstnew(ft_strdup("second"));
	newvalue2 = ft_lstnew(ft_strdup("third"));
	newvalue3 = ft_lstnew(ft_strdup("fourth"));
	ft_lstadd_back(&lst, newvalue);
	ft_lstadd_back(&lst, newvalue2);
	ft_lstadd_back(&lst, newvalue3);
	mapped = ft_lstmap(lst, upper_copy, free);
	ptr = mapped;
	while (ptr)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	ft_lstclear(&mapped, free);
	ft_lstclear(&lst, free);
}
*/