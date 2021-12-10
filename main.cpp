#include "board.h"
#include "pawn.h"

int main(void) 
{
    ChessPiece ChessBoard[BOARD_SIZE][BOARD_SIZE];
    initializeBoard(ChessBoard);
    printBoard(ChessBoard);
    positionMap chessMap;
    fillMap(chessMap);
    cout << chessMap["B1"].first << " " << chessMap["B1"].second << endl;
    movePawn(ChessBoard, chessMap, "A2", "A3");
    printBoard(ChessBoard);
    return 0;
}