BLUE=\e[1;94m
RED=\e[1;91m
RESET=\033[0m

NAME = violence

CC = c++

CFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS = $(SRC:.cpp=.o)

%.o: %.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		@echo "$(NAME): $(BLUE)$(OBJS) was created $(RESET)"

clean:
		rm -f $(OBJS)
		@echo "$(NAME): $(RED)$(OBJS) was deleted $(RESET)"

fclean: clean
		rm -f $(NAME)
		@echo "$(RED)$(NAME) was deleted $(RESET)"

re: fclean all
		@echo "$(BLUE) let's do it again! XD :) :O .|. .|. $(RESET)"

.PHONY: all clean fclean re