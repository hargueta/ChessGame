#ifndef TILE_H_INCLUDED
#define TILE_H_INCLUDED

#include <iostream>

using namespace std;

class Tile{
    private:
        unsigned int piece;
        bool isPiece;

    public:
        Tile();
        void move_options();
        void start_up();
        //code for start up.
        /*const startup[8][8] = { rook, knight, bishop, queen, king, bishop,
        knight, rook, pawn, pawn,pawn,pawn,pawn,pawn,pawn, pawn, 0, 0, 0, 0,
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0, 0, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn,
          -rook, -knight, -bishop, -queen, -king, -bishop, -knight, -rook};*/
        void setPiece(unsigned int piece);
        void setIsPiece(bool isPiece);

        int getPiece()const{return piece;}
        bool getIsPiece()const{return isPiece;}







};



#endif // TILE_H_INCLUDED
