/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:00:30 by sezequie          #+#    #+#             */
/*   Updated: 2026/08/18 22:46:45 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*ptrlst;

	i = 0;
	ptrlst = lst;
	while (ptrlst)
	{
		ptrlst = ptrlst->next;
		i++;
	}
	return (i);
}
