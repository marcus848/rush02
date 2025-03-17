# Variáveis
NAME = rush02
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRCS = \
	./srcs/main.c \
	./srcs/parse_dict.c \
	./srcs/utils.c ./srcs/print_low_numbers.c \
	./srcs/print_numbers.c

OBJS = $(SRCS:.c=.o)

INCLUDES = -I./includes

# Regras

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

