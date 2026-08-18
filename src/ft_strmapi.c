/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 22:48:44 by samercad          #+#    #+#             */
/*   Updated: 2026/08/18 22:48:45 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*ptr;
	unsigned int	i;

	if (!s || !f)
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (0);
	ptr = str;
	i = 0;
	while (*s)
	{
		*ptr = f(i, *s);
		ptr++;
		s++;
		i++;
	}
	*ptr = '\0';
	return (str);
}

/*
int main()
{
	char *s = "1234567890";
	printf("%s\n", ft_strmapi(s, &ft_toupper));
}
*/