CC = gcc
CFLAGS = -Wall -Wextra -Werror -Ilibft/include

NAME = libft.a

SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
	ft_strrchr.c ft_tolower.c ft_toupper.c ft_strnstr.c ft_atoi.c ft_calloc.c \
	ft_strdup.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c \
	ft_striteri.c ft_strmapi.c ft_substr.c ft_itoa.c ft_strjoin.c ft_strtrim.c \
	ft_split.c ft_printf.c ft_putchar.c ft_puthexa.c ft_putnbr.c ft_putptr.c \
	ft_putstr.c ft_putuns.c get_next_line.c ft_strcat.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
