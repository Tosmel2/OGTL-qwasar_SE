# Name of the executable
EXEC = my_mastermind

# List of source files
SRC = my_mastermind.c

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Default rule: build the executable
all: $(EXEC)

# Rule to build the executable
$(EXEC): $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) -o $@ $^

# $(EXEC): $(SRC)
# 	$(CC) $(CFLAGS) -o $@ $^

# Rule to clean up the project directory
clean:
	rm -f $(EXEC)

# Rule to clean up the project directory and remove the executable
fclean: clean
	rm -f $(EXEC)

# Rule to clean up the project directory, rebuild the executable, and run it
re: fclean all
	./$(EXEC)
