/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 22:46:52 by samercad          #+#    #+#             */
/*   Updated: 2026/08/18 22:46:52 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	chr;

	ptr = (unsigned char *)str;
	chr = (unsigned char)c;
	while (len--)
	{
		if (*ptr == chr)
			return (ptr);
		ptr++;
	}
	return (0);
}

/*
int main()
{
	char str[] = "1234567890";
	printf("%s\n", ft_memchr(str, '5', 5));
	printf("%s\n", memchr(str, '5', 5));
}
*/