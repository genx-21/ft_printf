NAME = libftprintf.a

SRC = ft_printf.c ft_putchar.c ft_putadress.c ft_puthexa.c \
      ft_putnbr.c ft_putnbr_unsigned.c ft_putstr.c ft_puthexa_for_adrs.c

OBJ = $(SRC:.c=.o)


AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
