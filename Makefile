NAME		:= libft_tester
CC		:= cc
CFLAGS		:= -Wall -Wextra -Werror -g
SRC_DIR		:= src
TEST_DIR	:= tests
BIN_DIR		:= $(TEST_DIR)/bin

SRC			:= $(wildcard $(SRC_DIR)/*.c)
TEST_SRC	:= $(wildcard $(TEST_DIR)/*_tester.c)
TEST_NAMES	:= $(patsubst $(TEST_DIR)/%_tester.c,%,$(TEST_SRC))

# Only build a tester when its corresponding ft_*.c actually exists.
VALID_NAMES	:= $(foreach t,$(TEST_NAMES),$(if $(wildcard $(SRC_DIR)/$(t).c),$(t)))
TEST_BINS	:= $(addprefix $(BIN_DIR)/,$(VALID_NAMES))

.PHONY: all clean fclean re tests list

all: $(NAME) tests

$(NAME): main_tester.c
	@$(CC) $(CFLAGS) -o $@ $<

tests: $(TEST_BINS)

$(BIN_DIR):
	@mkdir -p $(BIN_DIR)

# Every tester links against every source file currently present.
# This means helper functions used by ft_split, ft_itoa, etc. are available,
# while missing libft files do not prevent the Makefile from discovering
# and building the files that do exist.
$(BIN_DIR)/%: $(TEST_DIR)/%_tester.c $(SRC) | $(BIN_DIR)
	@printf "  CC  %-24s\n" "$@"
	@$(CC) $(CFLAGS) -I$(SRC_DIR) -o $@ $< $(SRC)

list:
	@printf "Available testers:\n"
	@for t in $(VALID_NAMES); do printf "  %s\n" "$$t"; done

clean:
	@rm -rf $(BIN_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
