/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samercad <samercad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:00:16 by samercad          #+#    #+#             */
/*   Updated: 2026/11/02 12:00:16 by samercad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (size != 0 && n > (size_t)-1 / size)
		return (0);
	ptr = malloc(n * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, n * size);
	return (ptr);
}

/*
int	main()
{
	size_t	num_elements = 5;
	size_t	element_size = sizeof(int);
	size_t	i;

	int *arr = ft_calloc(num_elements, element_size);
	if (arr != NULL)
	{
		i = 0;
		while (i < num_elements)
		{
			printf("%d ", arr[i]);
			i++;
		}
		free(arr);
	}
	else
		printf("Memory allocation failed\n");
	return 0;
}
*/