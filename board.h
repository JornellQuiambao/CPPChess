#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <unordered_map>
#include <tuple>

using namespace std;

#define BOARD_SIZE 8

struct ChessPiece {
    string name;
    char symbol;
    bool isWhite;
};

/* -----------------------------------------
 * createChessPiece()
 * -----------------------------------------
 * Desc:    Creates ChessPiece object from struct
 * Args:    string name of piece
 *          char symbol of piece
 *          bool determine if piece is white/black
 * Return:  ChessPiece
 */
ChessPiece createChessPiece(string name, char symbol, bool isWhite);

struct AllChessPieces {
    ChessPiece empty = createChessPiece("empty",'-',false);
    struct WhitePieces {
        ChessPiece Pawn = createChessPiece("Pawn",'P',true);
        ChessPiece Rook = createChessPiece("Rook",'R',true);
        ChessPiece Knight = createChessPiece("Knight",'H',true);
        ChessPiece Bishop = createChessPiece("Bishop",'B',true);
        ChessPiece Queen = createChessPiece("Queen",'Q',true);
        ChessPiece King = createChessPiece("King",'K',true);
    };
    struct BlackPieces {
        ChessPiece Pawn = createChessPiece("Pawn",'p',false);
        ChessPiece Rook = createChessPiece("Rook",'r',false);
        ChessPiece Knight = createChessPiece("Knight",'h',false);
        ChessPiece Bishop = createChessPiece("Bishop",'b',false);
        ChessPiece Queen = createChessPiece("Queen",'q',false);
        ChessPiece King = createChessPiece("King",'k',false);
    };
    WhitePieces White;
    BlackPieces Black;
};

/* -----------------------------------------
 * initializeBoard()
 * -----------------------------------------
 * Desc:    Initializes given board to standard chessboard
 * Args:    pointer to board
 * Return:  (none)
 */
void initializeBoard(ChessPiece board[][BOARD_SIZE]);

/* -----------------------------------------
 * modifyBoard()
 * -----------------------------------------
 * Desc:    Modifies the current chessboard with given position and new piece
 * Args:    pointer to board
 *          new ChessPiece object
 *          position int x
 *          position int y
 * Return:  (none)
 */
void modifyBoard(ChessPiece board[][BOARD_SIZE], ChessPiece newPiece, int x, int y);

/* -----------------------------------------
 * getBoard()
 * -----------------------------------------
 * Desc:    Returns current piece of chessboard at given position
 * Args:    pointer to board
 *          position int x
 *          position int y
 * Return:  ChessPiece
 */
ChessPiece getBoard(ChessPiece board[][BOARD_SIZE], int x, int y);

/* -----------------------------------------
 * printBoard()
 * -----------------------------------------
 * Desc:    Prints current state of chessboard to stdout
 * Args:    pointer to board
 * Return:  (none)
 */
void printBoard(ChessPiece board[][BOARD_SIZE]);

typedef unordered_map<string, pair<int,int>> positionMap;

void fillMap (positionMap &tempMap);

#endif