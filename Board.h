#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED
#include "Tile.h"

class Board
{
    private:
        //array of tiles for a place fro each piece to go on.
        Tile arra[8][8];

        //---->>>startup board with order of pieces.<<<----
        const char startup[8][8];

    public:
        Board();
        //default constructor

        void setup();
        //code for start up.
        /*const startup[8][8] = { rook, knight, bishop, queen, king, bishop,
        knight, rook, pawn, pawn,pawn,pawn,pawn,pawn,pawn, pawn, 0, 0, 0, 0,
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0, 0, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn,
          -rook, -knight, -bishop, -queen, -king, -bishop, -knight, -rook};*/
        void display(Tile arra[8][8]);
        //should update board every move.



};




#endif // BOARD_H_INCLUDED
