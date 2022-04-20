NAME = zombie
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
clean:
	rm $(OBJS)
fclean: clean
	rm $(NAME)
re: fclean all

.PHONY: all clean fclean re