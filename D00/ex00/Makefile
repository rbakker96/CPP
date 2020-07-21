# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: roybakker <roybakker@student.codam.nl>       +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/21 17:41:58 by roybakker     #+#    #+#                  #
#    Updated: 2020/07/21 18:12:57 by roybakker     ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SOURCES	= 	megaphone.cpp

OBJECTS_S =	${SOURCES:%.cpp=%.o}

FLAGS =		-Wall -Wextra -Werror
COMPILE	=	clang++


GREEN = \033[38;5;46m
WHITE = \033[38;5;15m
GREY = \033[38;5;8m
ORANGE = \033[38;5;202m
RED = \033[38;5;160m

all: $(NAME)

%.o: %.cpp
	@echo "$(GREY)Compiling...				$(WHITE)$<"
	@$(COMPILE) -c $(SOURCES)

$(NAME): $(OBJECTS_S)
	@$(COMPILE) $(FLAGS) $(OBJECTS_S) -o $(NAME)
	@echo "$(GREEN)Use exe - megaphone"

clean:
	@echo "$(RED)Deleting objectfiles"
	@/bin/rm -f $(OBJECTS_S)

fclean: clean
	@echo "$(RED)Deleting executable"
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
