/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:58:51 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 11:58:51 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest2;
	const unsigned char	*src2;

	i = 0;
	dest2 = dest;
	src2 = src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}

/*
#include <string.h>

int main()
{
	char str1[] = "1234567890";
	char str2[] = "1234567890";
	printf("%s\n", (char *)ft_memcpy(str1, str2, 5));
	printf("%s\n", (char *)memcpy(str1, str2, 5));
}
*/