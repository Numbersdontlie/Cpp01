GREEN=\033[0;32m
RED=\033[0;31m
RESET=\033[0m

NAME = zombieHorde

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Zombie.cpp zombieHorde.cpp

OBJS = $(SRC:.cpp=.o)

%.o: %.cpp Zombie.hpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		@echo "$(NAME): $(GREEN)$(OBJS) was created $(RESET)"

clean:
		rm -f $(OBJS)
		@echo "$(NAME): $(RED)$(OBJS) was deleted $(RESET)"

fclean: clean
		rm -f $(NAME)
		@echo "$(RED)$(NAME) was deleted $(RESET)"

re: fclean all

.PHONY: all clean fclean re