# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 12:25:08 by mherrezu          #+#    #+#              #
#    Updated: 2023/05/05 11:17:17 by mherrezu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NORMI = norminette .

NAME_S = server
NAME_C = client
NAME_S_B = server_bonus
NAME_C_B = client_bonus
LIBFT_FILE = print_libft/libft.a

SRC_S = server.c
SRC_C = client.c
SRC_S_B = server_bonus.c
SRC_C_B = client_bonus.c
SRC_LIBFT = ./print_libft

all: libft $(NAME_S) $(NAME_C) $(NAME_S_B) $(NAME_C_B)

libft:
	@$(MAKE) -C print_libft/
	@echo "Print_Libft compiled successfully\n"

$(NAME_S): $(SRC_S)
	@$(CC) $(CFLAGS) ${LIBFT_FILE} -o $@ $(SRC_S)
	@echo "Server compiled successfully\n"

$(NAME_C): $(SRC_C)
	@$(CC) $(CFLAGS) ${LIBFT_FILE} -o $@ $(SRC_C)
	@echo "Client compiled successfully\n"

$(NAME_S_B): $(SRC_S_B)
	@$(CC) $(CFLAGS) ${LIBFT_FILE} -o $@ $(SRC_S_B)
	@echo "Bonus server compiled successfully\n"

$(NAME_C_B): $(SRC_C_B)
	@$(CC) $(CFLAGS) ${LIBFT_FILE} -o $@ $(SRC_C_B)
	@echo "Bonus client compiled successfully\n"

bonus: libft $(NAME_S_B) $(NAME_C_B)

clean:
	@ $(MAKE) clean -sC $(SRC_LIBFT)

fclean: clean
	@ $(MAKE) fclean -sC $(SRC_LIBFT)
	@rm -f $(NAME_S) $(NAME_C) $(NAME_S_B) $(NAME_C_B)

re: fclean all

.PHONY: all clean re fclean print_libft
