NAME 		= 	ex04

SOURCES		= 	main.cpp FragTrap.cpp ScavTrap.cpp ClapTrap.cpp NinjaTrap.cpp SuperTrap.cpp

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
	@echo "Executable			./ex04"
	@echo "$(GREEN)----------------------------------------------------"

clean:
	@echo "$(RED)----------------------------------------------------"
	@echo "$(RED)Deleting			$(WHITE)main.o"
	@echo "$(RED)----------------------------------------------------"
	@echo "$(RED)Deleting			$(WHITE)FragTrap.o"
	@echo "$(RED)----------------------------------------------------"
	@echo "$(RED)Deleting			$(WHITE)ScavTrap.o"
	@echo "$(RED)----------------------------------------------------"
	@echo "$(RED)Deleting			$(WHITE)ClapTrap.o"
	@echo "$(RED)----------------------------------------------------"
	@echo "$(RED)Deleting			$(WHITE)NinjaTrap.o"
	@echo "$(RED)----------------------------------------------------"
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@echo "$(RED)----------------------------------------------------"
	@echo "Deleting			$(WHITE)./ex04"
	@echo "$(RED)----------------------------------------------------"
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
