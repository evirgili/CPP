NAME		= iter
#================================= sources =================================#

SRC			=	main.cpp

#================================= objects =================================#
OBJ			= $(SRC:.cpp=.o)
DEPS		= $(SRC:.cpp=.d)
#================================= flags ==================================#
CLANG_FLAGS	=	-Wall -Wextra -Werror -std=c++98 -MMD
#================================= headers =================================#
INC			=	iter.hpp

%.o:	%.cpp
	clang++ $(CLANG_FLAGS) -I$(INC) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJ)	$(INC)
	clang++ $(CLANG_FLAGS) -I$(INC) -I Awesome.hpp $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ) $(DEPS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
-include $(DEPS)
