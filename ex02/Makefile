LIB = ./Include
PRE = ./

SOURCE = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

SOURCES = ${addprefix $(PRE), $(SOURCE)}

NAME = frag_trap

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -I $(LIB) -c $< -o $@

clean: 
	rm -f $(OBJ)
        
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
