CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_FILES = ft_printf.c
OBJ_FILES := $(subst .c,.o,$(SRC_FILES))

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rv $(NAME) $(OBJ_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)