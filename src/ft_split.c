/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:58:18 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 11:58:19 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	n;

	n = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			n++;
		while (*s && *s != c)
			s++;
	}
	return (n);
}

static char	**free_all(char **tab, size_t n)
{
	while (n--)
		free(tab[n]);
	free(tab);
	return (NULL);
}

static char	**fill(char **tab, char const *s, char c)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (!len)
			break ;
		tab[i] = ft_substr(s, 0, len);
		if (!tab[i++])
			return (free_all(tab, i - 1));
		s += len;
	}
	tab[i] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	return (fill(tab, s, c));
}

/*
int main()
{
	char str[] = "1234567890";
	char **str2 = ft_split(str, '5');
	int i;

	if (!str2)
		return (1);
	i = 0;
	while (str2[i])
	{
		printf("%s\n", str2[i]);
		free(str2[i]);
		i++;
	}
	free(str2);
}
*/