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
			 ft_putstr_fd.c\
			 ft_split.c\
			 ft_strdup.c\
			 ft_strjoin.c\
			 ft_strncmp.c\
			 ft_strlen.c\

OBJS = $(patsubst %.c,%.o,$(FICHIERS_C))

CFLAGS= -Wall -Werror -Wextra -g3

CC = cc
${NAME} : ${OBJS} 
	$(CC) $(CFLAGS)  ${OBJS} -o $(NAME)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all : ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
.SILENT:
