CC 		:= 	clang
FLAGS 	:= 	-Wall -Wextra -Werror
RM		:=	rm -f

NAME	:=	libft.a

SRCS	:= 	$(shell find $(SRCDIR) -name "*.c")
OBJS	:=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			ar -rcs $(NAME) $(OBJS)

	
.c.o:
			$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

clean:
			$(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re 