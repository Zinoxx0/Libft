/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:57:41 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 11:57:43 by samercad         ###   ########.fr       */
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
char	upper_char(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

int main()
{
	char *s = "abcdefghij";
	char *result = ft_strmapi(s, &upper_char);

	printf("%s\n", result);
	free(result);
}
*/