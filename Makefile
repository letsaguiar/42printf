CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_FILES = $(wildcard *.c) $(wildcard libft/*.c)
OBJ_FILES := $(subst .c,.o,$(SRC_FILES))

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ_FILES)
	ar rv $(NAME) $(OBJ_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(LIBFT_FLAGS)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)