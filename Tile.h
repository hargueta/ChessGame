#ifndef TILE_H_INCLUDED
#define TILE_H_INCLUDED

#include "Piece.h"
#include <iostream>

using namespace std;

class Tile{
    private:
        Piece piece;
        bool isPiece;
        int x;
        int y;

    public:
        Tile();
        void move_options();

        void setPiece(unsigned int piece);
        void setIsPiece(bool isPiece);

        int getPiece()const{return piece.getPieceId();}
        bool getIsPiece()const{return isPiece;}







};



#endif // TILE_H_INCLUDED
