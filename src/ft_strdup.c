/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:58:08 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 11:58:08 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!dup)
		return (0);
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = str[i];
	return (dup);
}

/*
int main()
{
	char *str = "1234567890";
	char *result = ft_strdup(str);

	printf("%s\n", result);
	free(result);
}
*/