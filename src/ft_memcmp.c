/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 22:47:00 by samercad          #+#    #+#             */
/*   Updated: 2026/08/18 22:47:00 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (void *)s1;
	str2 = (void *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((int)(str1[i] - str2[i]));
		else
			i++;
	}
	return (0);
}

/*
int main()
{
	char str1[] = "1234567890";
	char str2[] = "1234567890";
	printf("%d\n", ft_memcmp(str1, str2, 5));
	printf("%d\n", memcmp(str1, str2, 5));
}
*/