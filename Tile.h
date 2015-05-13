#ifndef TILE_H_INCLUDED
#define TILE_H_INCLUDED

#include "Piece.h"
#include <iostream>

using namespace std;

class Tile{
    private:
        Piece piece;
        bool isPiece;

        bool isPlayer1;
        bool isPlayer2;

        //for when the player wants to move
        int x;
        int y;



    public:
        Tile();
        void move_options();

        void setPiece(int piece);
        void setIsPiece(bool isPiece);
        void setIsPlayer1(bool isPlayer1);
        void setIsPlayer2(bool isPlayer2);

        int getPiece()const{return piece.getPieceId();}
        bool getIsPiece()const{return isPiece;}
        bool getIsplayer1()const{return isPlayer1;}
        bool getIsplayer2()const{return isPlayer2;}








};



#endif // TILE_H_INCLUDED
