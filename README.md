# libft

## Usage

``make all`` - run this command to compile all library.<br/>
``make clean`` - run this command to remove all files.o .<br/>
``make fclean`` - run this command to remove all files.o, libft.a and the output test in this case is "teste".<br/>
``make teste`` - run this command to compile the library(libft.a) with the main(main.c).<br/>
``make re`` - this command run the ``fclean``, ``all`` and ``teste`` in this order for "rebuild" all the files.<br/>
``make bonus`` - this command compile with the bonus part.<br/>

### Functions from `<ctype.h>` library

* [`ft_isascii`](https://github.com/diogogomes2003/libft/blob/main/ft_isascii.c)			- test for ASCII character.
* [`ft_isalnum`](https://github.com/diogogomes2003/libft/blob/main/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isalpha`](https://github.com/diogogomes2003/libft/blob/main/ft_isalpha.c)			- alphabetic character test.
* [`ft_isdigit`](https://github.com/diogogomes2003/libft/blob/main/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isprint`](https://github.com/diogogomes2003/libft/blob/main/ft_isprint.c)			- printing character test (space character inclusive).
* [`ft_tolower`](https://github.com/diogogomes2003/libft/blob/main/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](https://github.com/diogogomes2003/libft/blob/main/ft_toupper.c)			- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](https://github.com/diogogomes2003/libft/blob/main/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](https://github.com/diogogomes2003/libft/blob/main/ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](https://github.com/diogogomes2003/libft/blob/main/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](https://github.com/diogogomes2003/libft/blob/main/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](https://github.com/diogogomes2003/libft/blob/main/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](https://github.com/diogogomes2003/libft/blob/main/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](https://github.com/diogogomes2003/libft/blob/main/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](https://github.com/diogogomes2003/libft/blob/main/ft_memcpy.c)		- copy memory area.

### Functions from `<string.h>` library

* [`ft_strlen`](https://github.com/diogogomes2003/libft/blob/main/ft_strlen.c)				- find length of string.
* [`ft_strchr`](https://github.com/diogogomes2003/libft/blob/main/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](https://github.com/diogogomes2003/libft/blob/main/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strnstr`](https://github.com/diogogomes2003/libft/blob/main/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strncmp`](https://github.com/diogogomes2003/libft/blob/main/ft_strncmp.c)			- compare strings (size-bounded).
* [`ft_strdup`](https://github.com/diogogomes2003/libft/blob/main/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strlcpy`](https://github.com/diogogomes2003/libft/blob/main/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](https://github.com/diogogomes2003/libft/blob/main/ft_strlcat.c)			- size-bounded string concatenation.

### Non-standard functions

* [`ft_putchar_fd`](https://github.com/diogogomes2003/libft/blob/main/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](https://github.com/diogogomes2003/libft/blob/main/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](https://github.com/diogogomes2003/libft/blob/main/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](https://github.com/diogogomes2003/libft/blob/main/ft_putnbr_fd.c)		- output integer to given file.
* [`ft_itoa`](https://github.com/diogogomes2003/libft/blob/main/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](https://github.com/diogogomes2003/libft/blob/main/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](https://github.com/diogogomes2003/libft/blob/main/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](https://github.com/diogogomes2003/libft/blob/main/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](https://github.com/diogogomes2003/libft/blob/main/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_striteri`](https://github.com/diogogomes2003/libft/blob/main/ft_striteri.c)				- this function changes upper case to lower case and lower case to upper case.
* [`ft_strmapi`](https://github.com/diogogomes2003/libft/blob/main/ft_strmapi.c)			- create new string from modifying string with specified function.

### Linked list functions

* [`ft_lstnew`](https://github.com/diogogomes2003/libft/blob/main/ft_lstnew.c)				- create new list.
* [`ft_lstsize`](https://github.com/diogogomes2003/libft/blob/main/ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](https://github.com/diogogomes2003/libft/blob/main/ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](https://github.com/diogogomes2003/libft/blob/main/ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](https://github.com/diogogomes2003/libft/blob/main/ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](https://github.com/diogogomes2003/libft/blob/main/ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](https://github.com/diogogomes2003/libft/blob/main/ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](https://github.com/diogogomes2003/libft/blob/main/ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](https://github.com/diogogomes2003/libft/blob/main/ft_lstmap.c)				- apply function to content of all list's elements into new list.

### Grade 125/100
