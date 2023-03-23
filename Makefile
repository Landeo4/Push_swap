NAME	=	Push_Swap

SRCS	=	srcs/main.c\
			srcs/Libft/ft_isdigit.c\
			srcs/Libft/ft_strlen.c\
			srcs/Libft/ft_atoi.c\
			srcs/Libft/ft_atol.c\
			srcs/Libft/ft_putstr_fd.c\
			srcs/List/ft_List1.c\
			srcs/List/ft_List2.c\
			srcs/Parsing/ft_verif_input.c\
			srcs/Parsing/ft_verif_existing.c\
			srcs/Parsing/ft_verif_duplicate.c\
			srcs/Parsing/ft_verif_int.c\
			srcs/Parsing/ft_parsing_manager.c\
			srcs/Action/sa.c\


OBJS= $(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra -g3
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