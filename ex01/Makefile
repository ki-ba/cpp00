NAME = phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp PhoneBook.cpp Contact.cpp
INC = Phonebook.hpp Contact.hpp

OBJ = $(SRC:%.cpp=%.o)

.PHONY = all re clean fclean

all : $(NAME)

clean :
	 rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean
	$(MAKE) all

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
