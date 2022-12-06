# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: troudot <troudot@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 22:03:19 by troudot           #+#    #+#              #
#    Updated: 2022/12/06 03:33:04 by troudot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a
NAME_PRINT = PRINTF
PREFIX_NAME = \033[1m\033[38;5;240m[\033[0m\033[38;5;250m$(NAME_PRINT)\033[1m\033[38;5;240m] \033[38;5;105m~\033[0m


CC =	gcc $(FLAG)
FLAG =	 -Wall -Wextra -Werror

SRCS =		ft_printf.c \

OBJS =	$(SRCS:%.c=%.o)

H	= first

all: 	$(NAME)

titre:
ifeq (${H} , first)
	@echo "\033[38;5;105m\n\n  ███████╗████████╗  ██████╗ ██████╗ ██╗███╗   ██╗████████╗███████╗ \033"
	@echo "\033[38;5;105m  ██╔════╝╚══██╔══╝  ██╔══██╗██╔══██╗██║████╗  ██║╚══██╔══╝██╔════╝ \033"
	@echo "\033[38;5;105m  █████╗     ██║     ██████╔╝██████╔╝██║██╔██╗ ██║   ██║   █████╗   \033"
	@echo "\033[38;5;105m  ██╔══╝     ██║     ██╔═══╝ ██╔══██╗██║██║╚██╗██║   ██║   ██╔══╝   \033"
	@echo "\033[38;5;105m  ██║        ██║     ██║     ██║  ██║██║██║ ╚████║   ██║   ██║      \033"
	@echo "\033[38;5;105m  ╚═╝        ╚═╝     ╚═╝     ╚═╝  ╚═╝╚═╝╚═╝  ╚═══╝   ╚═╝   ╚═╝       \033\n\n"
	@H=second
endif

$(OBJS): %.o: %.c
		@echo "$(PREFIX_NAME) Compiling \033[38;5;105m$<\033[m"
		@$(CC) $< -o $@ -c

$(NAME): titre $(SRCS) $(OBJS)
		@ar rcs $(NAME) $(OBJS)
		@echo "\n$(PREFIX_NAME) \033[38;5;084mFinish !\033[m"

clean: titre
		@rm -f $(OBJS)
		@echo "$(PREFIX_NAME)\033[38;5;084m Cleaning\n\033[m"

fclean:	clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# re-wrtie a line :
# @echo "A longer sentance" && sleep 1 && echo -e "\r\033[1A\033[0K$(PREFIX_NAME)"