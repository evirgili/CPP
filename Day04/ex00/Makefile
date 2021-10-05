NAME		= Animal
#================================= sources =================================#

SRC			=	main.cpp\
				Animal.cpp\
					Cat.cpp\
					Dog.cpp\
					WrongAnimal.cpp\
					WrongCat.cpp
#================================= objects =================================#
OBJ			= $(SRC:.cpp=.o)
#================================= flags ==================================#
CLANG_FLAGS	=	-Wall -Wextra -Werror -std=c++98


%.o:	%.cpp
	clang++ $(CLANG_FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJ)	$(INC)
	clang++ $(CLANG_FLAGS) $(OBJ) -o $(NAME) -I Animal.hpp -I Cat.hpp -I Dog.hpp

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
