NAME= a.out
COMP= c++
FLAGS= -std=c++98 -Wall -Wextra -Werror
SRC= Weapon.cpp HumanA.cpp HumanB.cpp main.cpp
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):$(OBJ)
	$(COMP) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re