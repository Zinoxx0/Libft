/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:58:04 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 11:58:05 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s)
	{
		f(i, s);
		s++;
		i++;
	}
}

/*
void	print_char(unsigned int i, char *c)
{
	(void)i;
	ft_putchar_fd(*c, 1);
}

int main()
{
	char str[] = "1234567890";
	ft_striteri(str, &print_char);
	ft_putchar_fd('\n', 1);
}
*/