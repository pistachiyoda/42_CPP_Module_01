NAME = brain
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
SRC = main.cpp

all: $(NAME)
$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)
clean:
	rm $(NAME)
re: clean all

.PHONY: all clean re
