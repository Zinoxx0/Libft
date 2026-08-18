#include "../src/libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	passed;

	passed = 0;
	if (ft_strlen("Hello, world!") == strlen("Hello, world!"))
	{
		printf("\033[0;32m✓ normal string passed\033[0m\n");
		passed++;
	}
	else
		printf("\033[0;31m✗ normal string failed\033[0m\n");

	if (ft_strlen("") == 0)
	{
		printf("\033[0;32m✓ empty string passed\033[0m\n");
		passed++;
	}
	else
		printf("\033[0;31m✗ empty string failed\033[0m\n");

	printf("%s: %d/2 tests passed\n", __func__, passed);
	return (passed == 2);
}
