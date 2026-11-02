/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:00:23 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 12:00:23 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	char	*ptr;

	ptr = str;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

/*
// "dirty" function, does not check for anything at all. deprecated by memset
int main()
{
	char str[] = "1234567890";
	ft_bzero(str, 5);
	printf("%s\n", str);
}
*/