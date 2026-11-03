/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:57:56 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 11:57:56 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (size <= i)
		j += size;
	else
		j += i;
	while (src[k] != '\0' && i + 1 < size)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (j);
}

/*
int main()
{
	char dst[20] = "1234567890";
	char source[20] = "1234567890";
	printf("%zu\n", ft_strlcat(dst, source, 5));
	printf("%s\n", dst);
}
*/