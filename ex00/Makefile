NAME = megaphone
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp


.PHONY : all re clean fclean

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

clean:


fclean:
	$(MAKE) clean
	rm -rf $(NAME)
