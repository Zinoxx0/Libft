/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:58:47 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 11:58:47 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest2;
	const unsigned char	*src2;

	dest2 = dest;
	src2 = src;
	if (dest2 > src2)
		while (n--)
			dest2[n] = src2[n];
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s[] = "abcdef";

	ft_memmove(s + 2, s, 4);
	printf("%s\n", s);  // ababcd (overlap handled)
}
*/