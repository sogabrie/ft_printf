SRCS			= ft_printf.c ft_hex.c ft_print_char.c ft_print_hexs.c \
				  	ft_print_int.c ft_print_point.c ft_print_string.c \
					ft_print_unint.c ft_unitoa.c ft_print_mhexs.c
OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
AR				= ar
ARFLAGS         = rcs

NAME			= libftprintf.a

LIBFT_PATH      = ./libft
LIBFT			= $(LIBFT_PATH)/libft.a

all:			$(NAME) Makefile

$(NAME):		$(LIBFT) $(OBJS)
				cp	$(LIBFT) $(NAME)
				$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(LIBFT):
				make -C $(LIBFT_PATH) all

clean:
				make -C $(LIBFT_PATH) clean
				$(RM) $(OBJS)

fclean:			clean
				make -C $(LIBFT_PATH) fclean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re libft
