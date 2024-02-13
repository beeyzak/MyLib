NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM	= rm -rf
SRCS = l_isdigit.c\
		l_isalpha.c\
		l_isalnum.c\
		l_isascii.c\
		l_isprint.c\
		l_strlen.c\
		l_toupper.c\
		l_tolower.c\
		l_strlcpy.c\
		l_strchr.c\
		l_strncmp.c\
		l_atoi.c\
		l_strrchr.c\
		l_strdup.c\
		l_strnstr.c\
		l_memchr.c\
		l_memcmp.c\
		l_memcpy.c\
		l_memmove.c\
		l_memset.c\
		l_bzero.c\
		l_calloc.c\
		l_substr.c\
		l_strjoin.c\
		l_strtrim.c\
		l_itoa.c\
		l_strmapi.c\
		l_striteri.c\
		l_putchar_fd.c\
		l_putstr_fd.c\
		l_putendl_fd.c\
		l_strlcat.c\
		l_putnbr_fd.c\
		l_split.c\
		
OBJS = $(SRCS:.c=.o)

								 
all: $(NAME)                    

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)        

clean:
	$(RM) $(OBJS)                  

 
fclean: clean 
	$(RM) $(NAME)

re: fclean all

.PHONY: all re fclean clean
