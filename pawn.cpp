#include "pawn.h"

void movePawn(ChessPiece board[][BOARD_SIZE], positionMap chessMap, string pos_i, string pos_f)
{
    AllChessPieces pieces;
    xi = chessMap[pos_i].first;
    yi = chessMap[pos_i].second;
    xf = chessMap[pos_f].first;
    yf = chessMap[pos_f].second;
    if (getBoard(board, xi, yi).name == "Pawn") {
        if (getBoard(board, xi, yi).isWhite) {

        }
    } else {
        throw invalid_argument("Piece chosen is not a pawn\n")
    }
}