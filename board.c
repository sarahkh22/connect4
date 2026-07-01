#include <stdio.h>
#include "board.h"

void boardInit(Board *b) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            b->grid[i][j] = '.';
        }
    }
}

void boardPrint(Board *b) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%c ", b->grid[i][j]);
        }
        printf("\n");
    }

    for (int j = 0; j < COLS; j++) {
        printf("%d ", j);
    }
    printf("\n");
}

int boardDrop(Board *b, int col, char piece) {
    if (col < 0 || col >= COLS) return 0;

    for (int i = ROWS - 1; i >= 0; i--) {
        if (b->grid[i][col] == '.') {
            b->grid[i][col] = piece;
            return 1;
        }
    }
    return 0;
}

int boardIsFull(Board *b) {
    for (int j = 0; j < COLS; j++) {
        if (b->grid[0][j] == '.') return 0;
    }
    return 1;
}
