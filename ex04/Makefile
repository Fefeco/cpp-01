# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 10:12:56 by fcarranz          #+#    #+#              #
#    Updated: 2024/10/31 20:29:49 by fcarranz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ex04
OBJ_DIR=objs/
DEP_DIR=deps/
CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
OBJ_FLAGS = $(CFLAGS) -MMD -g -c

SRC=main.cpp \
	replaceStr.cpp

TSRC=test.cpp \
	 replaceStr.cpp \
	 printDiffColor.cpp

OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

OBJS= $(addprefix $(OBJ_DIR), $(OBJ))
DEPS= $(addprefix $(DEP_DIR), $(DEP))

TOBJ=$(TSRC:.cpp=.o)
TDEP=$(TSRC:.cpp=.d)

TOBJS= $(addprefix $(OBJ_DIR), $(TOBJ))
TDEPS= $(addprefix $(DEP_DIR), $(TDEP))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): Makefile $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

test: Makefile $(TOBJS)
	$(CC) $(CFLAGS) $(TOBJS) -o $@

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(OBJ_DIR) $(DEP_DIR)
	$(CC) $(OBJ_FLAGS) $< -o $@
	@mv $(@:.o=.d) $(DEP_DIR)

clean:
	rm -rf $(OBJ_DIR) $(DEP_DIR)

fclean: clean
	rm -f $(NAME) test

re: fclean all

-include $(DEPS) $(TDEPS)
