NAME = libftprintf.a
SRC = ft_check_input.c \
		ft_printer.c \
		ft_printf.c
SRC_OBJS = $(SRC:.c=.o)
CC = gcc
AR = ar
HEADER = ft_printf.h
CFLAGS = -Wall -Wextra -Werror
LFLAGS  = -rcs
all: $(NAME)
$(NAME): $(SRC_OBJS)
			$(AR) $(LFLAGS) $(NAME) $(SRC_OBJS)
$(SRC_OBJS): $(SRC)
			$(CC) $(CFLAGS) -c $(SRC)
clean:
		-rm -f $(SRC_OBJS)
fclean: clean
		-rm -f $(NAME)
re:	fclean all