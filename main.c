#include <stdio.h>
#include "board.h"
#include "game.h"

int main() {
    Board b;
    boardInit(&b);

    char players[2] = {'X', 'O'};
    int turn = 0;

    while (1) {
        boardPrint(&b);

        int col;
        printf("Player %d (%c), choose column (0-6): ",
               turn + 1, players[turn]);

        if (scanf("%d", &col) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        if (!boardDrop(&b, col, players[turn])) {
            printf("Invalid move. Try again.\n");
            continue;
        }

        if (checkWin(&b, players[turn])) {
            boardPrint(&b);
            printf("Player %d wins!\n", turn + 1);
            break;
        }

        if (boardIsFull(&b)) {
            boardPrint(&b);
            printf("Draw!\n");
            break;
        }

        turn = 1 - turn;
    }

    return 0;
}
