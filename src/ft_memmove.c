/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 22:47:13 by samercad          #+#    #+#             */
/*   Updated: 2026/08/18 22:47:13 by samercad         ###   ########.fr       */
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
int main()
{
	char str1[] = "1234567890";
	char str2[] = "1234567890";
	printf("%s\n", ft_memmove(str1, str2, 5));
	printf("%s\n", memmove(str1, str2, 5));
}
*/