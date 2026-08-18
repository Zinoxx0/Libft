#include "../src/libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	test(const char *input)
{
	int	got;
	int	expected;

	got = ft_atoi(input);
	expected = atoi(input);
	if (got == expected)
	{
		printf("\033[0;32m✓ ft_atoi(\"%s\") -> %d\033[0m\n", input, got);
		return (1);
	}
	printf("\033[0;31m✗ ft_atoi(\"%s\") expected %d, got %d\033[0m\n",
		input, expected, got);
	return (0);
}

int	main(void)
{
	int	passed;

	passed = 0;
	passed += test("12345");
	passed += test("-12345");
	passed += test("   +42");
	passed += test("123abc");
	passed += test("0");
	printf("%s: %d/5 tests passed\n", __func__, passed);
	return (passed == 5);
}
