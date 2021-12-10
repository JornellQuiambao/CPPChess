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

void initializeBoard(ChessPiece board[][BOARD_SIZE]);

void modifyBoard(ChessPiece board[][BOARD_SIZE], ChessPiece newPiece, int x, int y);

ChessPiece getBoard(ChessPiece board[][BOARD_SIZE], int x, int y);

void printBoard(ChessPiece board[][BOARD_SIZE]);

void whiteInput(void);

typedef unordered_map<string, pair<int,int>> positionMap;

void fillMap (positionMap &tempMap);

#endif