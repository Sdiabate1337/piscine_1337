# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdiabate <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 04:47:25 by sdiabate          #+#    #+#              #
#    Updated: 2022/09/14 05:18:20 by sdiabate         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAGS : -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ft_display_file.o
	gcc -o ${FLAG} ft_display_file ft_display_file.o

%.o: %.c
	gcc -o ft_display_file.o -c ft_display_file.c

clean :
	rm -f ft_display_file.o

fclean : clean
	rm -f ${NAME}

