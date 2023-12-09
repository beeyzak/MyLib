NAME = libft.a
SRCS = ft_isprint.c ft_strlen.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c
OBJS = $(SRCS:.c=.o)
CC = gcc -g
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = -rc

all : $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) -c $(SRCS)
	ar $(ARFLAGS) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all