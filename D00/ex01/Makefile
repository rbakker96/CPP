NAME 		= 	phonebook

SOURCES		= 	main.cpp Contact.class.cpp

OBJECTS 	=	${SOURCES:%.cpp=%.o}

FLAGS 		=	-Wall -Wextra -Werror -std=c++98
COMPILE		=	clang++


GREEN 		= 	\033[38;5;46m
WHITE 		= 	\033[38;5;255m
GREY 		= 	\033[38;5;8m
ORANGE 		= 	\033[38;5;202m
RED 		= 	\033[38;5;160m

all: $(NAME)

%.o: %.cpp
	@echo "$(GREY)----------------------------------------------------"
	@echo "$(GREY)Compiling			$@"
	@echo "$(GREY)----------------------------------------------------"
	@$(COMPILE) $(FLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	@$(COMPILE) $(FLAGS) $(OBJECTS) -o $(NAME)
	@echo "$(GREEN)----------------------------------------------------"
	@echo "Executable			./phonebook"
	@echo "$(GREEN)----------------------------------------------------"

clean:
	@echo "$(RED)----------------------------------------------------"
	@echo "$(RED)Deleting			$(WHITE)main.o"
	@echo "$(RED)----------------------------------------------------"
	@echo "$(RED)Deleting			$(WHITE)Contact.class.o"
	@echo "$(RED)----------------------------------------------------"
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@echo "$(RED)----------------------------------------------------"
	@echo "Deleting			$(WHITE)./phonebook"
	@echo "$(RED)----------------------------------------------------"
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re