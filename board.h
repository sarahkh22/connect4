#ifndef BOARD_H
#define BOARD_H

#define ROWS 6
#define COLS 7

typedef struct {
    char grid[ROWS][COLS];
} Board;

// setup / display
void boardInit(Board *b);
void boardPrint(Board *b);

// board operations
int boardDrop(Board *b, int col, char piece);
int boardIsFull(Board *b);

#endif
