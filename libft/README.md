*This project has been created as part of the 42 curriculum by <xintchen>.*

# libft

## Description

`libft` is a custom C library created as part of the 42 curriculum. The goal of this project is to recreate a collection of commonly used functions from the standard C library, while also developing additional utility functions for string manipulation, memory management, conversion, file-descriptor output, and linked-list operations.

The project provides a deeper understanding of fundamental C programming concepts, including:

* Memory allocation and deallocation
* Pointers and pointer arithmetic
* Strings and character manipulation
* Arrays and memory blocks
* Type casting
* Function pointers
* Linked lists
* Dynamic memory management
* Error handling and memory leaks
* Makefiles and static libraries

The resulting library, `libft.a`, can be reused in later 42 projects.

---

## Library Contents

The library contains functions covering several categories.

### Character Classification and Conversion

Functions used to check and manipulate individual characters:

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`
* `ft_toupper`
* `ft_tolower`

### String Functions

Functions for measuring, searching, comparing, and manipulating strings:

* `ft_strlen`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_strnstr`
* `ft_strlcpy`
* `ft_strlcat`
* `ft_strdup`
* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_strmapi`
* `ft_striteri`

### Memory Functions

Functions for manipulating raw memory:

* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_memchr`
* `ft_memcmp`
* `ft_calloc`

### Conversion Functions

* `ft_atoi`
* `ft_itoa`

`ft_atoi` converts a numeric string into an integer, while `ft_itoa` converts an integer into a dynamically allocated string.

### File Descriptor Output

Functions for writing characters, strings, numbers, and lines to a specified file descriptor:

* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

### Linked List Functions

The bonus part of the project implements a singly linked list using the `t_list` structure.

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstadd_back`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

These functions provide operations for creating, traversing, modifying, adding to, deleting, and transforming linked lists.

---

## Detailed Library Description

### Static Library

The project produces a static library called:

```text
libft.a
```

A static library is an archive containing compiled object files (`.o`). Once created, it can be linked with another C program during compilation.

For example:

```bash
cc main.c libft.a -o program
```

This allows the program to use the functions implemented in `libft`.

### Linked List Structure

The linked-list portion of the library uses the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

Each node contains:

* `content` — a pointer to the data stored in the node.
* `next` — a pointer to the next node in the list.

A list can therefore be represented as:

```text
[content | next] -> [content | next] -> [content | next] -> NULL
```

Unlike an array, linked-list nodes do not need to occupy consecutive memory locations. Each node stores the address of the next node, allowing the list to be dynamically connected.

### Memory Management

Many functions in `libft` allocate memory dynamically using `malloc`. Functions that create new strings or lists are responsible for allocating enough memory for their results.

For example:

```c
char *str = ft_strdup("Hello");
```

The returned string is dynamically allocated and must eventually be freed:

```c
free(str);
```

The linked-list functions similarly require careful memory management, particularly when deleting individual nodes or clearing an entire list.

---

## Instructions

### Compilation

Clone the repository and enter the project directory:

```bash
git clone <repository-url>
cd libft
```

Compile the library using:

```bash
make
```

This creates:

```text
libft.a
```

### Bonus Functions

To compile the bonus linked-list functions:

```bash
make bonus
```

### Clean Object Files

To remove the generated object files:

```bash
make clean
```

### Remove All Generated Files

To remove object files and the static library:

```bash
make fclean
```

### Recompile Everything

To clean and rebuild the library:

```bash
make re
```

### Using the Library

A program can be compiled with `libft.a` using:

```bash
cc main.c libft.a -o program
```

The header file should be included in the source file:

```c
#include "libft.h"
```

Then the functions can be called normally:

```c
int	len;

len = ft_strlen("Hello, 42!");
```

---

## Testing

The functions can be tested by compiling a custom test program together with the library.

For example:

```bash
cc main.c libft.a -o test
./test
```

Memory leaks and invalid memory accesses can be checked using Valgrind:

```bash
valgrind --leak-check=full ./test
```

A successful test should ideally end with:

```text
All heap blocks were freed -- no leaks are possible
ERROR SUMMARY: 0 errors from 0 contexts
```

External testers can also be used to check the implementation against the expected behaviour of the functions.

---

## Resources

### C Documentation

* `man` pages for standard C library functions
* GNU C Library documentation
* C language documentation and references

Useful manual pages include:

```bash
man strlen
man memcpy
man memmove
man calloc
man malloc
man write
```

### Memory Management

* Valgrind documentation for detecting memory leaks and invalid memory accesses
* `malloc(3)`, `free(3)`, and related system documentation

### Linked Lists

* GeeksforGeeks — Linked List data structures and operations
* TutorialsPoint — C Linked Lists
* C programming references covering structures, pointers, and dynamic memory allocation

### 42 Resources

* 42 Libft subject PDF
* 42 Norm / Norminette documentation
* 42 community resources and peer-reviewed explanations of Libft concepts

### AI Usage

AI tools were used as a supplementary learning and debugging resource during the development of this project.

Specifically, AI assistance was used for:

* Explaining C programming concepts such as pointers, pointer-to-pointer variables, `sizeof`, `%zu`, memory allocation, and linked-list structures.
* Clarifying the behaviour and expected requirements of functions in the Libft subject.
* Reviewing implementations for readability, efficiency, and compatibility with the 42 coding style.
* Suggesting and explaining helper functions when implementations exceeded the Norminette line limit.
* Creating custom `main.c` test functions for individual Libft functions.
* Suggesting edge cases to include during testing.
* Explaining compiler, linker, and Valgrind error messages.
* Troubleshooting issues such as undefined references, uninitialised values, memory leaks, and conflicting function definitions.
* Explaining linked-list operations and the use of function pointers in functions such as `ft_lstiter` and `ft_lstmap`.

AI-generated suggestions were used as guidance and were reviewed, adapted, tested, and implemented manually. The final implementations were compiled and tested by the author.

---

## Technical Choices

The project follows the constraints and coding standards specified by the 42 Libft subject.

Key implementation choices include:

* Using `size_t` for string lengths, indexes, and memory sizes where appropriate.
* Using `unsigned char` for byte-level memory comparisons and manipulation.
* Using `long` internally where necessary to safely handle integer conversion edge cases in `ft_itoa`.
* Using helper functions for complex functions such as `ft_split` and `ft_itoa` to improve readability and comply with Norminette's line and function constraints.
* Using function pointers for callback-based functions such as `ft_strmapi`, `ft_striteri`, `ft_lstiter`, and `ft_lstmap`.
* Carefully freeing dynamically allocated memory when an allocation fails.
* Using a static library (`libft.a`) so that the library can be reused in future projects.

---

## Project Structure

A typical project structure is:

```text
libft/
├── Makefile
├── README.md
├── libft.h
├── libft.a
├── ft_*.c
└── ...
```

The `.c` files contain the individual function implementations, while `libft.h` contains the function prototypes and the linked-list structure definition.

The Makefile automates compilation and creation of the static library.

---

## Learning Outcomes

Through this project, I developed a stronger understanding of:

* C syntax and compilation
* Pointers and pointer arithmetic
* Dynamic memory allocation
* Strings and arrays
* Memory manipulation
* Function pointers
* Structures
* Linked lists
* Static libraries
* Makefiles
* Memory leak detection
* Debugging and testing
* Following strict coding standards

`libft` serves as a foundation for future 42 projects where these concepts are repeatedly used.
