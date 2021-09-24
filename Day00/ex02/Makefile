NAME		= account
#================================= sources =================================#

SRC			=	Account.cpp\
					test.cpp

#================================= objects =================================#
OBJ			= $(SRC:.cpp=.o)
#================================= flags ==================================#
CLANG_FLAGS	=	-Wall -Wextra -Werror -std=c++98
#================================= headers =================================#
INC			=	Account.hpp\

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
