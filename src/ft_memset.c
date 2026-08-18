/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 22:47:20 by samercad          #+#    #+#             */
/*   Updated: 2026/08/18 22:47:20 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (size > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		size--;
	}
	return (str);
}

/*
int main()
{
	char str[] = "1234567890";
	printf("%s\n", ft_memset(str, 'a', 5));
	printf("%s\n", memset(str, 'a', 5));
}
*/