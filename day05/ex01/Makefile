NAME		= Bureaucrat
#================================= sources =================================#

SRC			=	main.cpp\
				Bureaucrat.cpp\
				Form.cpp

#================================= objects =================================#
OBJ			= $(SRC:.cpp=.o)
#================================= flags ==================================#
CLANG_FLAGS	=	-Wall -Wextra -Werror -std=c++98

%.o:	%.cpp
	clang++ $(CLANG_FLAGS) -c $< -o $(<:.cpp=.o) -I Bureaucrat.hpp -I Form.hpp

$(NAME):	$(OBJ)	$(INC)
	clang++ $(CLANG_FLAGS) $(OBJ) -o $(NAME) -I Bureaucrat.hpp -I Form.hpp

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
