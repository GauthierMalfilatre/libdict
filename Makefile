##
## EPITECH PROJECT, 2025
## LIBDICT
## File description:
## Static library for a dictionnary
##
SRC = 	dict_add_entry.c \
		dict_remove_entry.c \
		dict_search_entry.c \
		dict_clear.c \
		dict_dump.c \

OBJ = $(SRC:.c=.o)

NAME = libdict.a
CC = gcc

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

.PHONY: clean
clean:
	find -name "*.o" -delete

.PHONY: fclean
fclean: clean
	rm -rf $(NAME)

.PHONY: re
re: fclean all
