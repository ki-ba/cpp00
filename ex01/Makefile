NAME = phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp PhoneBook.cpp Contact.cpp
INC = Phonebook.hpp Contact.hpp

INC_DIR = inc/
OBJ_DIR = .obj/
SRC_DIR = src/

INC_P = $(addprefix $(INC_DIR), $(INC))

OBJ = $(addprefix $(OBJ_DIR), $(SRC:%.cpp=%.o))

.PHONY = all re clean fclean

all : $(NAME)

clean :
	 rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean
	$(MAKE) all

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -I $(INC_DIR) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@
