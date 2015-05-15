#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED
#include "Tile.h"
#include "Piece.h"
#include "Tile.h"

class Board
{
    private:
        //array of tiles for a place fro each piece to go on.
        Tile arra[8][8];

        bool isCheckmate;

    public:
        Board();
        //default constructor

        void setup();

        bool can_pawn_move(int fromX, int fromY, int toX, int toY, Piece& piece);
        bool can_bishop_move(int fromX, int fromY, int toX, int toY, Piece& piece);
        bool can_knight_move(int fromX, int fromY, int toX, int toY,Piece& piece);
        bool can_rook_move(int fromX, int fromY, int toX, int toY, Piece& piece);
        bool can_queen_move(int fromX, int fromY, int toX, int toY, Piece& piece);
        bool can_king_move(int fromX, int fromY, int toX, int toY, Piece& piece);

        void display();
        bool IsInCheck(int player);
        bool canMove(int player);

        //should update board every move.

        Tile getTile(int x, int y){return arra[x][y];}

        bool isValidPiece(int x, int y);


        void setIsCheckmate(bool isCheckmate);
        bool getIsCheckmate()const{return isCheckmate;}




};
/*
pawn = 100
bishop = 305
knight = 300
rook = 500
queen = 900
king = 200

*/



#endif // BOARD_H_INCLUDED
