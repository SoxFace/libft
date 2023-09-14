## About libft

The linter and styleguide for 42 does not allow students to have access to the highly useful
standard functions. Lib_ft (ft = fourty two) project is about understanding the way these functions work,
implementing and learning to use them. Your will create your own library. It will be
helpful since you will use it in your next C school assignments.

## List of functions:

### Functions from `<ctype.h>` library

- [x] `ft_isascii` - test for ASCII character.
- [x] `ft_isalnum` - alphanumeric character test.
- [x] `ft_isalpha` - alphabetic character test.
- [x] `ft_isdigit` - decimal-digit character test.
- [x] `ft_isprint` - printing character test (space character inclusive).
- [x] `ft_tolower` - upper case to lower case letter conversion.
- [x] `ft_toupper` - lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

- [x] `ft_atoi`convert ASCII string to integer.
- [x] `ft_calloc`- memory allocation.

### Functions from `<strings.h>` library

- [x] `ft_bzero` write zeroes to a byte string.
- [x] `ft_memset`- write a byte to a byte string.
- [x] `ft_memchr`- locate byte in byte string.
- [x] `ft_memcmp`- compare byte string.
- [x] `ft_memmove` - copy byte string.
- [x] `ft_memcpy`- copy memory area.

### Functions from `<string.h>` library

- [x] `ft_strlen`- find length of string.
- [x] `ft_strchr`- locate character in string (first occurrence).
- [x] `ft_strrchr` - locate character in string (last occurence).
- [x] `ft_strnstr` - locate a substring in a string (size-bounded).
- [x] `ft_strncmp` - compare strings (size-bounded).
- [x] `ft_strdup`- save a copy of a string (with malloc).
- [x] `ft_strlcpy` - size-bounded string copying.
- [x] `ft_strlcat` - size-bounded string concatenation.

### Non-standard functions

- [x] `ft_itoa`- convert integer to ASCII string.
- [x] `ft_substr`- extract substring from string.
- [x] `ft_strtrim` - trim beginning and end of string with the specified characters.
- [x] `ft_strjoin` - concatenate two strings into a new string (with malloc).
- [x] `ft_split` split string, with specified character as delimiter, into an array of strings.
- [x] `ft_strmapi` - map: create new string from modifying string with specified function.
- [x] `ft_striteri` - each: iterate through each char in a string
- [x] `ft_putchar_fd` - output a character to given file.
- [x] `ft_putstr_fd` - output string to given file.
- [x] `ft_putendl_fd` - output string to given file with newline.
- [x] `ft_putnbr_fd` - output integer to given file.

### Linked list functions (bonus)

- [] `ft_lstnew`- create new list.
- [] `ft_lstsize` - count elements of a list.
- [] `ft_lstlast` - find last element of list.
- [] `ft_lstadd_back` - add new element at end of list.
- [] `ft_lstadd_front` - add new element at beginning of list.
- [] `ft_lstdelone` - delete element from list.
- [] `ft_lstclear' - delete sequence of elements of list from a starting point.
- [] `ft_lstiter` - apply function to content of all list's elements.
- [] `ft_lstmap`- apply function to content of all list's elements into new list.
