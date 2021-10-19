NAME		= materia
#================================= sources =================================#

SRC			=	src/main.cpp\
				src/AMateria.cpp\
				src/MaterialSource.cpp\
							src/Ice.cpp\
							src/Cure.cpp\
						src/Character.cpp\

#================================= objects =================================#
OBJ			= $(SRC:.cpp=.o)
#================================= flags ==================================#
CLANG_FLAGS	=	-Wall -Wextra -Werror -std=c++98
#================================= headers =================================#
INC			=	includes/head.hpp

%.o:	%.cpp
	clang++ $(CLANG_FLAGS) -I$(INC) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJ)	$(INC)
	clang++ $(CLANG_FLAGS) -I$(INC) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
