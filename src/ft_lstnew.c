/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:59:09 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 11:59:10 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

// int	main(void)
// {
// 	int	content_value = 42;
// 	t_list	*new_list = ft_lstnew(&content_value);

// 	if (new_list)
// 	{
// 		printf("List content: %d\n", *((int *)new_list->content));
// 		free(new_list);
// 	}
// 	return 0;
// }