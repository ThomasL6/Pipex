 # **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 15:57:12 by thlefebv          #+#    #+#              #
#    Updated: 2023/09/11 15:57:13 by thlefebv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = pipex

FICHIERS_C = pipex.c\
	     utils.c\
	     
LIB = libft/libft.a

OBJS = $(patsubst %.c,%.o,$(FICHIERS_C))

CFLAGS= -Wall -Werror -Wextra -g

CC = cc
${NAME} : ${OBJS}
	make all -C libft
	$(CC) $(CFLAGS)  ${OBJS} $(LIB) -o $(NAME)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all : ${NAME}

clean:
	make clean -C libft
	rm -f ${OBJS}

fclean: clean
	make fclean -C libft
	rm -f ${NAME}

re: fclean all

.SILENT: