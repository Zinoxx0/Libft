/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:59:53 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 11:59:53 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c <= '~' && c >= ' ')
		return (1);
	return (0);
}

/*
#include <ctype.h>

int main()
{
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", isprint('a'));
}
*/