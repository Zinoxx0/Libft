/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 22:49:02 by samercad          #+#    #+#             */
/*   Updated: 2026/08/18 22:49:02 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last;

	last = 0;
	while (*str != '\0')
	{
		if (*str == (unsigned char)c)
			last = (char *)str;
		str++;
	}
	if (*str == (unsigned char)c)
		return ((char *)str);
	return (last);
}

/*
int main()
{
	char str[] = "1234567890";
	printf("%s\n", ft_strrchr(str, '0'));
	printf("%s\n", strrchr(str, '0'));
}
*/