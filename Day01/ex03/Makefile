NAME		= weapon
#================================= sources =================================#

SRC			=	main.cpp\
				Weapon.cpp\
				HumanA.cpp\
				HumanB.cpp


#================================= objects =================================#
OBJ			= $(SRC:.cpp=.o)
#================================= flags ==================================#
CLANG_FLAGS	=	-Wall -Wextra -Werror -std=c++98
#================================= headers =================================#
INC			=	Weapon.hpp\
				HumanA.hpp\
				HumanB.hpp

%.o:	%.cpp
	clang++ $(CLANG_FLAGS) -c $< -o $(<:.cpp=.o) -I Weapon.hpp -I HumanA.hpp -I HumanB.hpp

$(NAME):	$(OBJ)	$(INC)
	clang++ $(CLANG_FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
