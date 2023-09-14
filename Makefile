# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sonyacorcoran <sonyacorcoran@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/10 15:22:10 by scorcora          #+#    #+#              #
#    Updated: 2023/08/24 12:29:32 by sonyacorcor      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define the source files for the library functions
SRC = ft_substr.c ft_strjoin.c ft_strlen.c ft_strdup.c \
	ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_memset.c \
	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_tolower.c ft_toupper.c \
	ft_atoi.c ft_bzero.c \
	ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
	ft_calloc.c \
	ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# Output library
NAME = libft.a

# Directory for object files
OBJS_DIR = objs/
OBJS = $(SRC:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

# compiler and flags
CC = gcc
CC_FLAGS = -Wall -Wextra -Werror
# Rule to compile individual source files into object files
$(OBJS_DIR)%.o: %.c libft.h
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@gcc $(CC_FLAGS) -c $< -o $@

# Rule to build the main library
$(NAME): $(OBJECTS_PREFIXED)
	@echo "Objects: $(OBJECTS_PREFIXED)"  # Debug line
	@ar r $(NAME) $(OBJECTS_PREFIXED) # (r)eplace existing files within the (ar)chive
	@echo "Libft build complete"

# Rule: build all
all: $(NAME)
# Rule: clean all object files in dir
clean:
	rm -rf $(OBJS_DIR)

# Rule: remove library file
fclean: clean
	rm -f $(NAME)

# Rule: (re)build everything from scratch
re: fclean all

