#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

#define TEST_DIR "./tests/bin"
#define MAX_TESTS 128

static int	is_bonus(const char *name)
{
	return (strncmp(name, "ft_lst", 6) == 0);
}

static int	load_tests(char **tests)
{
	DIR				*dir;
	struct dirent	*entry;
	int				count;

	dir = opendir(TEST_DIR);
	if (!dir)
		return (0);
	count = 0;
	while ((entry = readdir(dir)) != NULL && count < MAX_TESTS)
	{
		if (strncmp(entry->d_name, "ft_", 3) == 0)
		{
			tests[count] = strdup(entry->d_name);
			if (!tests[count])
				break ;
			count++;
		}
	}
	closedir(dir);
	return (count);
}

static void	free_tests(char **tests, int count)
{
	int	i;

	i = 0;
	while (i < count)
		free(tests[i++]);
}

static int	cmp_tests(const void *a, const void *b)
{
	const char	*const *left = a;
	const char	*const *right = b;

	return (strcmp(*left, *right));
}

static void	print_menu(char **tests, int count)
{
	int	i;

	printf("\n");
	printf("\033[1;32m========== libft tester ==========\033[0m\n");
	printf("  \033[1;33mall\033[0m      - run all available mandatory tests\n");
	printf("  \033[1;33mbonus\033[0m    - run all available bonus tests\n");
	printf("  \033[1;33mlist\033[0m     - list available tests\n");
	printf("  \033[1;33mexit\033[0m     - quit\n");
	printf("\n");
	printf("  Or enter a function name, e.g. \033[1;36mft_split\033[0m\n");
	printf("\nAvailable tests:\n");
	i = 0;
	while (i < count)
	{
		printf("  %s%s\n", tests[i], is_bonus(tests[i]) ? "  [bonus]" : "");
		i++;
	}
	printf("\n> ");
}

static int	run_test(const char *name)
{
	char	path[512];
	int		status;
	pid_t	pid;

	snprintf(path, sizeof(path), "%s/%s", TEST_DIR, name);
	pid = fork();
	if (pid < 0)
	{
		perror("fork");
		return (0);
	}
	if (pid == 0)
	{
		execl(path, name, (char *)NULL);
		perror(path);
		_exit(127);
	}
	if (waitpid(pid, &status, 0) < 0)
	{
		perror("waitpid");
		return (0);
	}
	return (WIFEXITED(status) && WEXITSTATUS(status) == 0);
}

static int	run_group(char **tests, int count, int bonus)
{
	int	i;
	int	run;
	int	passed;

	passed = 0;
	i = 0;
	while (i < count)
	{
		if (is_bonus(tests[i]) == bonus)
		{
			run = run_test(tests[i]);
			if (run)
				passed++;
		}
		i++;
	}
	return (passed);
}

static void	print_list(char **tests, int count)
{
	int	i;

	printf("\n");
	i = 0;
	while (i < count)
	{
		printf("  %-24s%s\n", tests[i], is_bonus(tests[i]) ? "[bonus]" : "");
		i++;
	}
}

int	main(void)
{
	char	*tests[MAX_TESTS];
	char	input[128];
	int		count;
	int		i;
	int		found;

	count = load_tests(tests);
	qsort(tests, count, sizeof(*tests), cmp_tests);
	if (count == 0)
	{
		printf("No testers were built.\n");
		printf("Run: make tests\n");
		return (1);
	}
	while (1)
	{
		print_menu(tests, count);
		if (!fgets(input, sizeof(input), stdin))
			break ;
		input[strcspn(input, "\n")] = '\0';
		if (strcmp(input, "exit") == 0 || strcmp(input, "q") == 0)
			break ;
		if (strcmp(input, "list") == 0)
		{
			print_list(tests, count);
			continue ;
		}
		if (strcmp(input, "all") == 0)
		{
			printf("\n\033[1;34m--- mandatory ---\033[0m\n");
			run_group(tests, count, 0);
			continue ;
		}
		if (strcmp(input, "bonus") == 0)
		{
			printf("\n\033[1;34m--- bonus ---\033[0m\n");
			run_group(tests, count, 1);
			continue ;
		}
		found = 0;
		i = 0;
		while (i < count)
		{
			if (strcmp(input, tests[i]) == 0
				|| (strncmp(input, "ft_", 3) == 0
					&& strcmp(input, tests[i]) == 0))
			{
				found = 1;
				run_test(tests[i]);
				break ;
			}
			i++;
		}
		if (!found)
			printf("\033[1;31mUnknown or unavailable test: %s\033[0m\n",
				input);
	}
	free_tests(tests, count);
	return (0);
}
