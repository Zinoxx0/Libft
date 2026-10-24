/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:17:32 by sezequie          #+#    #+#             */
/*   Updated: 2026/08/18 22:47:51 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	splitcount(const char *check, char c)
{
	int	bo;
	int	l;
	int	k;

	bo = 0;
	l = 0;
	k = 0;
	while (check && check[k] != '\0')
	{
		if (bo == 0 && check[k] != c)
		{
			bo = 1;
			l++;
		}
		else if (check[k] == c)
			bo = 0;
		k++;
	}
	return (l);
}

static	char	**free_all(char **splitted, size_t n)
{
	while (n--)
		free(splitted[n]);
	free(splitted);
	return (NULL);
}

static	char	**fill(char **splitted, char const *s, char c)
{
	int		o;
	size_t	i;
	size_t	p;

	o = -1;
	i = 0;
	p = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && o < 0)
			o = i;
		else if ((s[i] == c || i == ft_strlen(s)) && o >= 0)
		{
			splitted[p] = ft_substr(s, o, i - o);
			if (!splitted[p++])
				return (free_all(splitted, p));
			o = -1;
		}
		i++;
	}
	splitted[p] = NULL;
	return (splitted);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;

	if (!s)
		return (NULL);
	splitted = (char **)malloc(sizeof(char *) * (splitcount(s, c) + 1));
	if (!splitted)
		return (NULL);
	return (fill(splitted, s, c));
}

/*
int main()
{
	char str[] = "1234567890";
	char **str2 = ft_split(str, '5');
	printf("%s\n", str2[0]);
	printf("%s\n", str2[1]);
	printf("%s\n", str2[2]);
	printf("%s\n", str2[3]);
	printf("%s\n", str2[4]);
	printf("%s\n", str2[5]);
}
*/