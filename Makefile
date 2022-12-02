# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: troudot <troudot@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 22:03:19 by troudot           #+#    #+#              #
#    Updated: 2022/12/02 04:42:13 by troudot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a

PREFIX_NAME = \033[38;5;240m[\033[m\033[38;5;250mPRINTF\033[38;5;240m]\033[m

CC =	gcc $(FLAG)
FLAG =	 -Wall -Wextra -Werror

SRCS =		ft_printf.c \
			ft_printfopy.c \
			main.c \

OBJS =	$(SRCS:%.c=%.o)

H	= first

all: 	$(NAME)

titre:
ifeq (${H} , first)
	@echo "PRINTF"
	@H=second
endif

$(OBJS): %.o: %.c
		@echo "$(PREFIX_NAME) Compiling \033[38;5;166m$< -> $@\033[m"
		@$(CC) $< -o $@ -c

$(NAME): $(SRCS) $(OBJS)
		@ar rcs $(NAME) $(OBJS)
		@echo "\033[38;5;084m\nDone !\033[m"

clean:
		@rm -f $(OBJS)
		@echo "\033[38;5;084mDone !\033[m"

fclean:	clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re