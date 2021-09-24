NAME		= phonebook
#================================= sources =================================#
SRC			=	main.cpp\
				Contact.cpp\
				Phonebook.cpp

#================================= objects =================================#
OBJ			= $(SRC:.cpp=.o)
#================================= flags ==================================#
CLANG_FLAGS	=	-Wall -Wextra -Werror -std=c++98
#================================= headers =================================#
INC		=	Contact.hpp\
				Phonebook.hpp

%.o:	%.cpp
	clang++ $(CLANG_FLAGS)  -c $< -o $(<:.cpp=.o) -I Contact.hpp -I Phonebook.hpp

$(NAME):	$(OBJ)	$(INC)
	clang++ $(CLANG_FLAGS)  -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
