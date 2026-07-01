CC = gcc
CFLAGS = -Wall -Wextra -std=c11

TARGET = connect4

OBJS = main.o board.o game.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c board.h game.h
	$(CC) $(CFLAGS) -c main.c

board.o: board.c board.h
	$(CC) $(CFLAGS) -c board.c

game.o: game.c game.h board.h
	$(CC) $(CFLAGS) -c game.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
