#include "../src/libft.h"
#include <stdio.h>
#include <string.h>

static int check(const char *label, const char *got, const char *expected)
{
	if (strcmp(got, expected) == 0)
	{
		printf("\033[0;32m✓ %s passed\033[0m\n", label);
		return (1);
	}
	printf("\033[0;31m✗ %s failed\033[0m\n", label);
	printf("  expected: \"%s\"\n", expected);
	printf("  got:      \"%s\"\n", got);
	return (0);
}

int main(void)
{
	char	buf[32];
	int		passed;

	passed = 0;
	memcpy(buf, "0123456789", 11);
	ft_memmove(buf + 2, buf, 8);
	passed += check("ft_memmove overlap", buf, "0101234567");

	memcpy(buf, "abcdefghij", 11);
	ft_memmove(buf, buf + 2, 8);
	passed += check("ft_memmove reverse overlap", buf, "cdefghijij");

	printf("%s: %d/2 tests passed\n", __func__, passed);
	return (passed == 2);
}
