#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED
#include "tile.h"

class Board
{
    private:
        Tile arra[8][8];


    public:
        Board();

        void start_up();
        //code for start up.
        /*const startup[8][8] = { rook, knight, bishop, queen, king, bishop,
        knight, rook, pawn, pawn,pawn,pawn,pawn,pawn,pawn, pawn, 0, 0, 0, 0,
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0, 0, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn,
          -rook, -knight, -bishop, -queen, -king, -bishop, -knight, -rook};*/
        void display(Tile arra[8][8]);



};




#endif // BOARD_H_INCLUDED
