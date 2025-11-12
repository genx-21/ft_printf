NAME = libftprintf.a

SRC = ft_printf.c  ft_puchar.c  ft_putadress.c  ft_puthexa.c \
	  ft_putnbr.c  ft_putnbr_unsigned.c  ft_putstr.c

OBJ = $(SRC.c:.o)

AR = ar rcs
RM = rm -rf

ALL : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
.PHONY: ALL clean fclean