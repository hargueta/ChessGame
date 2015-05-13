#ifndef TILE_H_INCLUDED
#define TILE_H_INCLUDED

#include "Piece.h"
#include <iostream>

using namespace std;

class Tile{
    private:
        Piece piece;
        bool isPiece;

    public:
        Tile();
        void move_options();

        void setPieceId(int pieceId);
        void setPieceIcon(char icon);
        void setIsPiece(bool isPiece);

        int getPieceId()const{return piece.getPieceId();}
        char getPieceIcon()const {return piece.getPieceIcon();}
        bool getIsPiece()const{return isPiece;}







};



#endif // TILE_H_INCLUDED
