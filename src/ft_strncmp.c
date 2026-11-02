/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:57:30 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 11:57:30 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (*str1 == *str2 && *str2 != '\0' && n > 0)
	{
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}

/*
#include <string.h>

int main()
{
	char str1[] = "1234567890";
	char str2[] = "1234567890";
	printf("%d\n", ft_strncmp(str1, str2, 5));
	printf("%d\n", strncmp(str1, str2, 5));
}
*/