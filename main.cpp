#include "board.h"

int main(void) 
{
    ChessPiece ChessBoard[BOARD_SIZE][BOARD_SIZE];
    initializeBoard(ChessBoard);
    printBoard(ChessBoard);
    positionMap chessMap;
    fillMap(chessMap);
    cout << chessMap["B1"].first << " " << chessMap["B1"].second << endl;
    return 0;
}