*This project has been created as part of the 42 curriculum by fqussay.*

# Libft

## Description

Libft is a C library that reimplements standard libc functions and adds other utilities, for reuse in future 42 projects. It has three parts:

1. **Libc functions**: same prototypes and behavior as the originals, as defined
   in their man pages, with an `ft_` prefix.
2. **Additional functions**: functions that are either not in the libc or exist in a different form.
3. **Linked list**: functions that manipulate linked lists using the `t_list`  structure.

## Instructions

- `make`: builds `libft.a`
- `make clean`: removes the object files
- `make fclean`: removes the object files and `libft.a`
- `make re`: rebuilds everything

To use it, include `libft.h` and compile with `cc -Wall -Wextra -Werror main.c -L. -lft`.

## Library description

- **Libc:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`,
  `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`,
  `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`, `ft_strrchr`,
  `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`, `ft_atoi`, `ft_calloc`,
  `ft_strdup`
- **Additional:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`,
  `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`,
  `ft_putnbr_fd`
- **Linked list:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`,
  `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Resources

- `man` pages in the terminal
- [GNU C Library manual](https://www.gnu.org/software/libc/manual/)

AI was used to explain concepts and to assist with implementation, as well as the README structure.
