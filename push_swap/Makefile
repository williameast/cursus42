NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
LIBFT_DIR = libft
LIBFT = ./libft/libft.a
RM = rm -rf
SRCS = main.c printing.c movements.c list_mgmt.c double_moves.c sanitize.c cost_calculator.c utils.c algo.c moveseq.c segment.c
SRC	= $(addprefix ./src/,$(SRCS))
OBJ = $(SRC:.c=.o)


all: $(LIBFT) $(NAME)
	@echo "Generated all files."

$(LIBFT):
	@make -s -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME) -L./$(LIBFT_DIR) -lft

$(OBJ): $(SRC)
	@$(CC) $(CFLAGS) -c $? -I./$(LIBFT_DIR)
	@mv *.o obj

clean:
	@$(RM) src/*.o
	@make -s -C $(LIBFT_DIR) clean
	@echo "cleaned build files."

fclean:	clean
	@$(RM) $(NAME)
	@make -s -C $(LIBFT_DIR) fclean
	@echo "full clean complete."

re:	fclean all clean

.PHONY: all clean fclean test re

OS = $(shell uname)

size ?= 100

ifeq ($(OS),Linux)
CHECKER = ./push_swap $(ARG) | ./checker_linux $(ARG)
else
CHECKER = ./push_swap $(ARG) | ./checker_Mac $(ARG)
endif

test:
	@$(eval ARG = $(shell seq -1000 1000 | shuf -n $(size)))
	@echo "Checker result: "
	$(CHECKER)
	@echo "Instructions count: "
	@./push_swap $(ARG) | wc -l

