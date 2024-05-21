NAME 		= libftprintf.a
CFLAGS		= -Wall -Wextra -Werror -I.
CC			= cc
RM			= rm -f
CREATE		= ar rc
INDEXLIB	= ranlib
SRCS		= libft/ft_atoi.c \
				libft/ft_bzero.c \
				libft/ft_calloc.c \
				libft/ft_isalnum.c \
				libft/ft_isalpha.c \
				libft/ft_isascii.c \
				libft/ft_isdigit.c \
				libft/ft_isprint.c \
				libft/ft_itoa.c \
				libft/ft_memchr.c \
				libft/ft_memcmp.c \
				libft/ft_memcpy.c \
				libft/ft_memmove.c \
				libft/ft_memset.c \
				libft/ft_putchar_fd.c \
				libft/ft_putendl_fd.c \
				libft/ft_putnbr_fd.c \
				libft/ft_putstr_fd.c \
				libft/ft_split.c \
				libft/ft_strchr.c \
				libft/ft_strdup.c \
				libft/ft_striteri.c \
				libft/ft_strjoin.c \
				libft/ft_strlcat.c \
				libft/ft_strlcpy.c \
				libft/ft_strlen.c \
				libft/ft_strmapi.c \
				libft/ft_strncmp.c \
				libft/ft_strnstr.c \
				libft/ft_strrchr.c \
				libft/ft_strtrim.c \
				libft/ft_substr.c \
				libft/ft_tolower.c \
				libft/ft_toupper.c \
				libft/ft_lstadd_front.c \
				libft/ft_lstlast.c \
				libft/ft_lstnew.c \
				libft/ft_lstsize.c \
				libft/ft_lstadd_back.c \
				libft/ft_lstdelone.c \
				libft/ft_lstclear.c \
				libft/ft_lstiter.c \
				libft/ft_lstmap.c \
				analyzers/analyze_identifier.c \
				converters/decimal_to_hex.c \
				converters/ft_unsigned_itoa.c \
				handlers/handle_conversion.c \
				handlers/handle_field_width.c \
				handlers/handle_flag.c \
				handlers/handle_precision.c \
				init/init.c \
				output/print_char.c \
				output/print_fzero.c \
				output/print_hex_two.c \
				output/print_hex.c \
				output/print_int_three.c \
				output/print_int_two.c \
				output/print_int.c \
				output/print_pointer.c \
				output/print_specifier.c \
				output/print_string.c \
				output/print_unsigned_int.c \
				utils/ft_putstr_reverse_fd.c \
				utils/get_whitespace.c \
				utils/isconversion.c \
				utils/isflag.c \
				utils/print_flag.c \
				ft_printf.c \

OBJS		= ${SRCS:.c=.o}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
		${CREATE} ${NAME} ${OBJS}
		${INDEXLIB} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

bonus: all

re: fclean all

.PHONY: all, clean, fclean, re , bonus
