NAME	= push_swap
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

SRCS	= push_swap.c  push_swap_utils.c radix.c control.c sort_small.c \
		moves_a.c moves_b.c moves_both.c linked_list.c linked_list_2.c \

OBJS	= $(SRCS:.c=.o)
LIBFT	= ./libft/libft.a

all:	$(NAME)

$(NAME):	$(OBJS)
	make -C ./libft
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

clean:
	make clean -C ./libft
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(LIBFT)

re: fclean all

.PHONY: all fclean clean re