# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/03 03:31:35 by hannkim           #+#    #+#              #
#    Updated: 2022/09/03 22:29:06 by hannkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX					= c++

ifdef DEBUG
	CXXFLAGS	= --std=c++98 -g3 -fsanitize=address
else ifdef LEAKS
	CXXFLAGS	= --std=c++98 -g
else
	CXXFLAGS	= --std=c++98 -Wall -Wextra -Werror
endif

NAME				=  mutanted

SRCS				= main.cpp

OBJS				= ${SRCS:%.cpp=%.o}

OBJ_FILES		= $(OBJS)

COMPILE_MSG	= @echo $(BOLD)$(L_PUPLE) 📣 ${NAME} Compiled 🥳$(RESET)

######################### Color #########################
GREEN="\033[32m"
L_GREEN="\033[1;32m"
RED="\033[31m"
L_RED="\033[1;31m"
RESET="\033[0m"
BOLD="\033[1m"
L_PUPLE="\033[1;35m"
L_CYAN="\033[1;96m"
UP = "\033[A"
CUT = "\033[K"

########################## Rule ##########################

.PHONY		:	all
all				:	$(OBJS) $(NAME)

$(NAME)		:	$(OBJS)
						@$(CXX) $(CXXFLAGS) $(OBJS) -o $@
						@echo  $(L_CYAN) 🔗 Linking [$(notdir $^)] to [$@] $(RESET)
						$(COMPILE_MSG)


%.o				:	%.cpp
						@$(CXX) $(CXXFLAGS) -c $< -o $@
						@echo $(BOLD)$(L_GREEN) Compiling with $(CXXFLAGS) ...$(RESET)
						@echo $(GREEN) [$(notdir $^)] to [$(notdir $@)] $(RESET)

.PHONY		:	clean
clean			:
						@rm -f $(OBJS)
						@echo $(L_RED) Remove🧹 OBJ files in $(NAME) 👋 $(RESET)


.PHONY		:	fclean
fclean		:	clean
						@rm -f $(NAME)
						@echo $(RED) Remove🧹 $(NAME) 📣 $(RESET)

.PHONY		:	re
re				:	fclean
						@make all

.PHONY		:	debug
debug			:
						@make DEBUG=1
						@echo $(RED)$(BOLD) It\'s DEBUG TIME🤪$(RESET)

.PHONY		:	leaks
leaks			:
						@make LEAKS=1
						@echo $(RED)$(BOLD) Is there Leaks?🚰$(RESET)
