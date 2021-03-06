//author: Gabriel Zapata
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

        bool can_pawn_move(int fromX, int fromY, int toX, int toY);
        bool can_bishop_move(int fromX, int fromY, int toX, int toY);
        bool can_knight_move(int fromX, int fromY, int toX, int toY);
        bool can_rook_move(int fromX, int fromY, int toX, int toY);
        bool can_queen_move(int fromX, int fromY, int toX, int toY);
        bool can_king_move(int fromX, int fromY, int toX, int toY);

        //displays the board every other turn including the
        //black & white pieces
        void display();

        //checks if the current player is inCheck which means they can
        //only move the king
        bool IsInCheck(int player);
        bool canMove(int player);

        void movePiece(int fromX, int fromY, int toX, int toY);

        Tile& getTile(int x, int y){return arra[x][y];}

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
