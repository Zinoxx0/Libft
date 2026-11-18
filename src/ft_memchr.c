/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:59:01 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 11:59:01 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	chr;

	ptr = (unsigned char *)s;
	chr = (unsigned char)c;
	while (n--)
	{
		if (*ptr == chr)
			return (ptr);
		ptr++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", (char *)ft_memchr("hello", 'l', 5));  // llo
}
*/