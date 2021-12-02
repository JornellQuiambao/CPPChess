#include "board.h"

using namespace std;

ChessPiece createChessPiece(string name, char symbol, bool isWhite)
{
    ChessPiece piece;
    piece.name = name;
    piece.symbol = symbol;
    piece.isWhite = isWhite;
    return piece;
}

void initializeBoard(ChessPiece board[][BOARD_SIZE])
{
    AllChessPieces pieces;
    for(int i=0;i<BOARD_SIZE;i++) {
        for(int j=0;j<BOARD_SIZE;j++) {
            if (i==1) {
                board[i][j] = pieces.Black.Pawn;
            } else if ((i==0 && j==0) || (i==0 && j==BOARD_SIZE-1)) {
                board[i][j] = pieces.Black.Rook;
            } else if ((i==0 && j==1) || (i==0 && j==BOARD_SIZE-2)) {
                board[i][j] = pieces.Black.Knight;
            } else if ((i==0 && j==2) || (i==0 && j==BOARD_SIZE-3)) {
                board[i][j] = pieces.Black.Bishop;
            } else if (i==0 && j==3) {
                board[i][j] = pieces.Black.Queen;
            } else if (i==0 && j==4) {
                board[i][j] = pieces.Black.King;
            } else if (i==BOARD_SIZE-2) {
                board[i][j] = pieces.White.Pawn;
            } else if ((i==BOARD_SIZE-1 && j==0) || (i==BOARD_SIZE-1 && j==BOARD_SIZE-1)) {
                board[i][j] = pieces.White.Rook;
            } else if ((i==BOARD_SIZE-1 && j==1) || (i==BOARD_SIZE-1 && j==BOARD_SIZE-2)) {
                board[i][j] = pieces.White.Knight;
            } else if ((i==BOARD_SIZE-1 && j==2) || (i==BOARD_SIZE-1 && j==BOARD_SIZE-3)) {
                board[i][j] = pieces.White.Bishop;
            } else if (i==BOARD_SIZE-1 && j==4) {
                board[i][j] = pieces.White.Queen;
            } else if (i==BOARD_SIZE-1 && j==3) {
                board[i][j] = pieces.White.King;
            } else {
                board[i][j] = pieces.empty;
            }
        }
    }
}

void printBoard(ChessPiece board[][BOARD_SIZE])
{
    for(int i=0;i<BOARD_SIZE;i++) {
        for(int j=0;j<BOARD_SIZE;j++) {
            cout << board[i][j].symbol << ' ';
        }
        cout << '\n';
    }
}

void whiteInput(void)
{
    string move;
    cout << "White's Turn: ";
    cin >> move;
}
