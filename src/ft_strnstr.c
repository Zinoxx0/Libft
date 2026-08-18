/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 22:48:57 by samercad          #+#    #+#             */
/*   Updated: 2026/08/18 22:48:57 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (!*to_find)
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		k = i;
		while (str[k] == to_find[j] && k < len)
		{
			k++;
			j++;
			if (to_find[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}

/*
int main()
{
	char str[] = "1234567890";
	char to_find[] = "456";
	printf("%s\n", ft_strnstr(str, to_find, 10));
	printf("%s\n", strnstr(str, to_find, 10));
}
*/