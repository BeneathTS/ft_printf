NAME =  libftprintf.a

COMPILER = clang

CFLAGS = -Wall -Wextra -Werror

HDRS = ft_printf.h	\

SPEC =	c_spec.c	\
		s_spec.c	\
		p_spec.c	\
		use_spec.c	\

UTILS =	print_hex.c	\

SRCS =	$(SPEC)		\
		$(UTILS)	\
		ft_printf.c	\

OBJ = $(SRCS:.c=.o)

INCLUDE_PATH = include/

SRC_PATH = source/

INCLUDE = -I $(INCLUDE_PATH)

vpath %.c $(SRC_PATH)
vpath %.c $(SRC_PATH)specs
vpath %.c $(SRC_PATH)utils
vpath %.h $(INCLUDE_PATH)

.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): $(OBJ) $(HDRS)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ): $(SRCS)
	@$(COMPILER) $(CFLAGS) $(INCLUDE) -c $^

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f tst

re: fclean all

test:
	@gcc Tests/main.c -I include/ -L. -lftprintf -o tst