CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook

FILE = PhoneBook.cpp\
		Contact.cpp\
		Utils.cpp\
		main.cpp

all: $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) -o $(NAME) $(FILE)

fclean:
	rm -rf $(NAME)

re: fclean all