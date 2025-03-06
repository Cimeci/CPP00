CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Account

FILE = Account.cpp\
		tests.cpp\

all: $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) -o $(NAME) $(FILE)

fclean:
	rm -rf $(NAME)

re: fclean all