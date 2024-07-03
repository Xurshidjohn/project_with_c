CC = gcc
CFLAGS = -Wall -Wextra -g
SRCS = main.c user.c
TARGET = hello
all: $(TARGET)
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $^ -o $@
clean:
	rm -f $(TARGET)

