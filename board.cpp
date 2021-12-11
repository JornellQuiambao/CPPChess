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

void modifyBoard(ChessPiece board[][BOARD_SIZE], ChessPiece newPiece, int x, int y) {
    board[x][y] = newPiece;
}

ChessPiece getBoard(ChessPiece board[][BOARD_SIZE], int x, int y)
{
    return board[x][y];
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

void fillMap (positionMap &tempMap)
{
    string coords[8][8] = {{"A8","B8","C8","D8","E8","F8","G8","H8"},
                        {"A7","B7","C7","D7","E7","F7","G7","H7"},
                        {"A6","B6","C6","D6","E6","F6","G6","H6"},
                        {"A5","B5","C5","D5","E5","F5","G5","H5"},
                        {"A4","B4","C4","D4","E4","F4","G4","H4"},
                        {"A3","B3","C3","D3","E3","F3","G3","H3"},
                        {"A2","B2","C2","D2","E2","F2","G2","H2"},
                        {"A1","B1","C1","D1","E1","F1","G1","H1"}};
    for(int i=0;i<(BOARD_SIZE);i++) {
        for(int j=0;j<(BOARD_SIZE);j++) {
            tempMap[coords[i][j]] = make_pair(i,j);
        }
    }
}