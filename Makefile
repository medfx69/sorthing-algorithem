NAME=push_swap
CC = cc
FLAGS2=-Wall -Wextra -Werror 
RM=rm -f
SRC =  push_swap.c utilites.c utilites_2.c
SRCB =  push_swap.outilites.o utilites_2.o
all : $(NAME)
$(NAME):
	$(CC) $(FLAGS2) $(SRC) -o $(NAME)
fclean: clean
	rm -f $(NAME)

clean:
	rm -f *.o

re: fclean all
.PHONY: fclean clean re all