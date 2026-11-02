/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:58:14 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 11:58:14 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c && *str != '\0')
		str++;
	if (*str == (char)c)
		return ((char *)str);
	return (0);
}

/*
#include <string.h>

int main()
{
	char str[] = "1234567890";
	printf("%s\n", ft_strchr(str, '5'));
	printf("%s\n", strchr(str, '5'));
}
*/