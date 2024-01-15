CC 		:= 	clang
FLAGS 	:= 	-Wall -Wextra -Werror
RM		:=	rm -f

NAME	:=	libft.a

SRCDIR = .
OBJDIR  :=  build
SOURCES	:= 	$(shell find $(SRCDIR) -name "*.c")
OBJECTS :=  $(addprefix $(OBJDIR)/, $(notdir $(SOURCES:.c=.o)))

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJECTS)
	chmod +x $(NAME)

$(OBJDIR)/%.o : $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(FLAGS) -c -o $@ $<

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SOURCES)
	gcc -nostartfiles -shared -o libft.so $(OBJECTS)

clean:
	$(RM) -r $(OBJDIR)

fclean:	clean
	$(RM) $(NAME)

re:
	fclean all

name:
	$(info   $(NAME))

.PHONY:
	all clean fclean re