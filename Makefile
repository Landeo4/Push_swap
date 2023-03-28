NAME	=	Push_Swap

SRCS	=	srcs/main.c\
			srcs/Libft/ft_isdigit.c\
			srcs/Libft/ft_strlen.c\
			srcs/Libft/ft_atoi.c\
			srcs/Libft/ft_atol.c\
			srcs/Libft/ft_putstr_fd.c\
			srcs/List/ft_List1_a.c\
			srcs/List/ft_List2_a.c\
			srcs/List/ft_List1_b.c\
			srcs/List/ft_List2_b.c\
			srcs/Parsing/ft_verif_input.c\
			srcs/Parsing/ft_verif_existing.c\
			srcs/Parsing/ft_verif_duplicate.c\
			srcs/Parsing/ft_verif_int.c\
			srcs/Parsing/ft_parsing_manager.c\
			srcs/Action/sa.c\
			srcs/Action/sb.c\
			srcs/Action/pa.c\
			srcs/Action/pb.c\
			srcs/Action/ra.c\
			srcs/Action/rb.c\

OBJS= $(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra -g3 -g
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