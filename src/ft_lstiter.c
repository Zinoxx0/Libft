/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:07:05 by sezequie          #+#    #+#             */
/*   Updated: 2026/08/18 22:46:29 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void	*))
{
	t_list	*ptrlst;

	ptrlst = lst;
	while (ptrlst)
	{
		f(ptrlst->content);
		ptrlst = ptrlst->next;
	}
}
