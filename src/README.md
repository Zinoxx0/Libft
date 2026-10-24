*This project has been created as part of the 42 curriculum by samercad.*

# Libft

## Description

Libft is a static C library (`libft.a`) that reimplements part of the standard C library and adds extra string, output and linked-list helpers.

All functions are declared in `libft.h`.

### Part 1 - Libc functions

Same behaviour as the libc originals, with an `ft_` prefix.

| Function | What it does |
| --- | --- |
| `ft_isalpha` | 1 if the char is a letter, else 0 |
| `ft_isdigit` | 1 if the char is `0`-`9`, else 0 |
| `ft_isalnum` | 1 if the char is a letter or digit, else 0 |
| `ft_isascii` | 1 if the value is in 0-127, else 0 |
| `ft_isprint` | 1 if the char is printable (space to `~`), else 0 |
| `ft_toupper` | Lowercase letter to uppercase, anything else unchanged |
| `ft_tolower` | Uppercase letter to lowercase, anything else unchanged |
| `ft_strlen` | Length of a string |
| `ft_strchr` | Pointer to the first occurrence of a char in a string |
| `ft_strrchr` | Pointer to the last occurrence of a char in a string |
| `ft_strncmp` | Compares up to `n` chars of two strings |
| `ft_strnstr` | Finds a substring within the first `len` chars of a string |
| `ft_strlcpy` | Safe string copy into a buffer of a given size |
| `ft_strlcat` | Safe string append into a buffer of a given size |
| `ft_strdup` | Allocated copy of a string |
| `ft_atoi` | Converts a string to an `int` |
| `ft_memset` | Fills `n` bytes with a value |
| `ft_bzero` | Sets `n` bytes to zero |
| `ft_memcpy` | Copies `n` bytes (areas must not overlap) |
| `ft_memmove` | Copies `n` bytes, safe when areas overlap |
| `ft_memchr` | Finds a byte in the first `n` bytes of memory |
| `ft_memcmp` | Compares `n` bytes of two memory areas |
| `ft_calloc` | Allocates zeroed memory for an array |

### Part 2 - Additional functions

| Function | What it does |
| --- | --- |
| `ft_substr` | New string: a slice of `s` from `start`, at most `len` chars |
| `ft_strjoin` | New string: `s1` followed by `s2` |
| `ft_strtrim` | New string: `s1` without the chars of `set` at both ends |
| `ft_split` | NULL-terminated array of the words of `s`, split on char `c` |
| `ft_itoa` | New string: an `int` written in decimal |
| `ft_strmapi` | New string: `f(index, char)` applied to each char of `s` |
| `ft_striteri` | Applies `f(index, &char)` to each char of `s`, in place |
| `ft_putchar_fd` | Writes a char to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string and a newline to a file descriptor |
| `ft_putnbr_fd` | Writes an `int` to a file descriptor |

### Part 3 - Linked list

Nodes are `t_list` structs: a `void *content` and a `next` pointer.

| Function | What it does |
| --- | --- |
| `ft_lstnew` | Creates a node holding `content` |
| `ft_lstadd_front` | Adds a node at the start of a list |
| `ft_lstadd_back` | Adds a node at the end of a list |
| `ft_lstsize` | Counts the nodes of a list |
| `ft_lstlast` | Returns the last node of a list |
| `ft_lstdelone` | Frees one node and its content (with `del`) |
| `ft_lstclear` | Frees a whole list and sets the list pointer to NULL |
| `ft_lstiter` | Applies `f` to the content of every node |
| `ft_lstmap` | New list made of `f` applied to every node's content |

## Instructions

Build the library (compiled with `cc -Wall -Wextra -Werror`):

```sh
make        # builds libft.a
make clean  # removes the object files
make fclean # removes the object files and libft.a
make re     # rebuilds from scratch
```

Use it in a program by including the header and linking the archive:

```c
#include "libft.h"
```

```sh
cc main.c -I path/to/libft -L path/to/libft -lft
```

## Resources

Most of the code was written from scratch, using these references:

- The Linux man pages (`man strlcpy`, `man memmove`, ...), the main reference for how each libc function must behave.
- [GeeksforGeeks](https://www.geeksforgeeks.org/), occasionally, for C concepts and implementation.
- [Libft_Tester](https://github.com/Zinoxx0/Libft_Tester), my own tester for this library. Every test bundle was handwritten, to understand the real libc functions, programming in general, and the issues in my own libft.

### AI usage

[Claude Code](https://claude.com/claude-code) was used for:

- **A glossary for core concepts:** explaining C ideas while I wrote the code myself.
- **The tester's tooling:** it helped build Libft_Tester framework, but the test bundles themselves are mostly handwritten (see above).
- **Bug-hunting:** finding edge cases I might have overlooked.
- **Formatting:** tidying (prettifying) up this README.md
