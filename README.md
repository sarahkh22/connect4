# Connect4 (C)
An implementation of the classic Connect4 game written in C.

## Features
- 2-player Connect4 gameplay (Player X vs Player O)
- 6x7 game board
- Turn-based input system
- Win detection:
  - Horizontal
  - Vertical
  - Diagonal

## How to Build & Run

### Compile the program
```bash
make
```

### Run the game
```bash
./connect4
```

### Clean build files
```bash
make clean
```

## How to Play
- Players take turns selecting a column (0–6)
- Pieces drop to the lowest available row
- First player to connect 4 in a row wins
- Game ends immediately when a player wins or board is full

## Example Output
```
. . . . . . .
. . . . . . .
. . . . . . .
. . . . . . .
. . . . . . .
. . . . . . .
0 1 2 3 4 5 6
Player 1 (X), choose column:
