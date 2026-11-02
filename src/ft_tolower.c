/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:56:47 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 11:56:47 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (c + 32);
	return (c);
}

/*
#include <ctype.h>

int main()
{
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", tolower('A'));
}
*/