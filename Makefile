NAME	=	Push_Swap

SRCS	=	srcs/main.c\
			srcs/Libft/ft_isdigit.c\
			srcs/Libft/ft_strlen.c\
			srcs/Parsing/ft_verif_input.c\
			srcs/Parsing/ft_verif_existing.c\



OBJS= $(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra
.c.o:
		${CC} ${CFLAGS} -Iincludes -c $< -o ${<:.c=.o}

all : ${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -rf ${OBJS}

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

.PHONY:	all clean fclean re