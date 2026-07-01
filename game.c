#include "game.h"

int checkWin(Board *b, char p) {
    char (*g)[COLS] = b->grid;

    // horizontal
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS - 3; j++) {
            if (g[i][j] == p &&
                g[i][j+1] == p &&
                g[i][j+2] == p &&
                g[i][j+3] == p)
                return 1;
        }
    }

    // vertical
    for (int i = 0; i < ROWS - 3; i++) {
        for (int j = 0; j < COLS; j++) {
            if (g[i][j] == p &&
                g[i+1][j] == p &&
                g[i+2][j] == p &&
                g[i+3][j] == p)
                return 1;
        }
    }

    // diagonal down-right
    for (int i = 0; i < ROWS - 3; i++) {
        for (int j = 0; j < COLS - 3; j++) {
            if (g[i][j] == p &&
                g[i+1][j+1] == p &&
                g[i+2][j+2] == p &&
                g[i+3][j+3] == p)
                return 1;
        }
    }

    // diagonal up-right
    for (int i = 3; i < ROWS; i++) {
        for (int j = 0; j < COLS - 3; j++) {
            if (g[i][j] == p &&
                g[i-1][j+1] == p &&
                g[i-2][j+2] == p &&
                g[i-3][j+3] == p)
                return 1;
        }
    }

    return 0;
}
