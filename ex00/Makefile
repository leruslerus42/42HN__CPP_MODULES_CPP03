# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/15 08:57:10 by rrajaobe          #+#    #+#              #
#    Updated: 2022/07/15 08:57:42 by rrajaobe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SELF_WRN = -Wno-self-assign-field

NAME = 	clap_trap

SRC = 	main.cpp \
		./classes/ClapTrap.cpp \
	
OBJ = $(SRC: .c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f *.o
		rm -f ./src/*.o

fclean: clean
		rm -f $(NAME)

re: fclean all