/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 22:47:57 by samercad          #+#    #+#             */
/*   Updated: 2026/08/18 22:47:57 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (unsigned char)c && *str != '\0')
		str++;
	if (*str == (unsigned char)c)
		return ((char *)str);
	return (0);
}

/*
int main()
{
	char str[] = "1234567890";
	printf("%s\n", ft_strchr(str, '5'));
	printf("%s\n", strchr(str, '5'));
}
*/