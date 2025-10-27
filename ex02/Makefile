NAME = job

CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC = Account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)
INC = Account.hpp

OBJ_DIR = .obj

.PHONY : all
all: $(NAME)

.PHONY : clean
clean:
	rm -f $(OBJ)

.PHONY : fclean
fclean: clean
	rm -f $(NAME)

.PHONY : re
re: fclean all

.PHONY : test
test: all
	./runtest.sh

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ) $(INC)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp $(INC) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
