NAME		= phonebook
##################################sources#######################################

SRC			=	main.cpp\
				Contact.cpp\
				Phonebook.cpp

#####i################################objects###################################
OBJ			= $(SRC:.cpp=.o)
#####################################flags######################################
CLANG_FLAGS	=	-Wall -Wextra -Werror -std=c++98
# SANITIZE	=	-fsanitize=address
#####################################headers####################################
INC			=	Contact.hpp\
				Phonebook.hpp

%.o:	%.cpp
	clang++ $(CLANG_FLAGS)  -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJ)	$(INC)
	clang++ $(CLANG_FLAGS)  -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

# norm:
# 	cpplint --recursive .

.PHONY: all clean fclean re
