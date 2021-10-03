NAME		= DiamondTrap
#================================= sources =================================#

SRC			=	main.cpp\
				ClapTrap.cpp\
				ScavTrap.cpp\
				FragTrap.cpp\
				DiamondTrap.cpp

#================================= objects =================================#
OBJ			= $(SRC:.cpp=.o)
#================================= flags ==================================#
CLANG_FLAGS	=	-Wall -Wextra -Werror -std=c++98

%.o:	%.cpp
	clang++ $(CLANG_FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJ)	$(INC)
	clang++ $(CLANG_FLAGS) $(OBJ) -o $(NAME) -I ClapTrap.hpp -I ScavTrap.hpp -I FragTrap.hpp -I DiamondTrap.hpp

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
