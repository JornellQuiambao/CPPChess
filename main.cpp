#include "board.h"

int main(void) 
{
    ChessPiece ChessBoard[BOARD_SIZE][BOARD_SIZE];
    initializeBoard(ChessBoard);
    printBoard(ChessBoard);
    whiteInput();
    return 0;
}