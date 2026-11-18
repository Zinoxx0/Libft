/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:00:23 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 12:00:23 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

/*
// "dirty" function, does not check for anything at all. deprecated by memset
#include <stdio.h>

int	main(void)
{
	char	s[] = "abcdef";

	ft_bzero(s, 3);
	printf("[%s] [%s]\n", s, s + 3);  // [] [def]
}
*/