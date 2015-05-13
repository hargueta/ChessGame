#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED
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

        void display(Tile arra[8][8]);
        //should update board every move.

        void setIsCheckmate(bool isCheckmate);
        bool getIsCheckmate()const{return isCheckmate;}




};
/*
pawn = 100
bishop = 305
knight = 300
rook = 500
queen = 900
king = 2000

*/



#endif // BOARD_H_INCLUDED
