# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: majrou <majrou@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 18:06:32 by majrou            #+#    #+#              #
#    Updated: 2023/05/15 22:17:49 by majrou           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = ft_isdigit.c ft_utilse2.c ft_utilse.c ft_utilse1.c ft_split.c rules.c rules1.c rules2.c sorted.c sorted1.c sorted1_1.c push_swap.c sorted2.c all_case.c
OBJ = $(SRC:.c=.o)
HEADER = push_swap.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAMEBONUS = checker
SRCBONUS = checker_me/push_swap_bonus.c checker_me/ft_utilse_bonus.c checker_me/ft_utilse1_bonus.c checker_me/ft_utilse2_bonus.c checker_me/utilse3_bonus.c \
				checker_me/rules_bonus.c checker_me/rules1_bonus.c checker_me/rules2_bonus.c \
				checker_me/ft_isdigit_bonus.c checker_me/ft_split_bonus.c checker_me/check_rules.c \
				checker_me/GNL/get_next_line.c checker_me/GNL/get_next_line_utils.c

OBJBONUS = $(SRCBONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ)  -o $(NAME)



bonus : $(NAMEBONUS)

$(NAMEBONUS) : $(OBJBONUS)
		$(CC) $(CFLAGS) $(OBJBONUS) -o $(NAMEBONUS)

%.o: %.c $
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compilatio is done..."

clean:
	@rm -rf $(OBJ) $(OBJBONUS)
	@echo "Remove object file ..."


fclean: clean
	@rm -rf $(NAME) $(NAMEBONUS)
	@echo "Remove object file and output ..."

re: fclean all


