SOURCE	= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

PATH = ${addprefix ./srcs/, ${SOURCE}}

OBJECTS = ${PATH:.c=.o}

HEADER = ./includes/

NAME = libft.a

AR = ar rc
RM = rm -f
INDEX = ranlib
GCC = gcc
CFLAGS = -Wall -Wextra -Werror

all:	${NAME}

.c.o:
	${GCC} ${CFLAGS} -c -I ${HEADER} $< -o ${<:.c=.o}

${NAME}:	${OBJECTS}
	${AR} ${NAME} ${OBJECTS}
	${INDEX} ${NAME}

clean:
	${RM} ${OBJECTS}

fclean:		clean
	${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re