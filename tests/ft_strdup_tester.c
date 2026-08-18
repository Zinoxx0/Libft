#include "../src/libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int	test(const char *input)
{
	char	*got;
	int		ok;

	got = ft_strdup(input);
	ok = got && strcmp(got, input) == 0;
	if (ok)
		printf("\033[0;32m✓ ft_strdup(\"%s\") passed\033[0m\n", input);
	else
		printf("\033[0;31m✗ ft_strdup(\"%s\") failed\033[0m\n", input);
	free(got);
	return (ok);
}

int	main(void)
{
	int	passed;

	passed = 0;
	passed += test("hello");
	passed += test("");
	passed += test("42 Lisboa");
	printf("%s: %d/3 tests passed\n", __func__, passed);
	return (passed == 3);
}
