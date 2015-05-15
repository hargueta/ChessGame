//author: Gabriel Zapata
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

        int player;

        //for when the player wants to move
        int x;
        int y;



    public:
        Tile();
        void move_options();

        //move options for each individual piece and these
        //will be called when we check what the selected piece
        //is whether its player 1s piece or player 2s piece.


        //Accessors & Mutators for each tile
        void setPiece(int pieceId);
        void setPieceIcon(char icon);
        void setIsPiece(bool isPiece);
        void setIsPlayer1(bool isPlayer1);
        void setIsPlayer2(bool isPlayer2);
        void setPlayer(int player);

        int getPiece()const{return piece.getPieceId();}
        char getPieceIcon()const {return piece.getPieceIcon();}
        bool getIsPiece()const{return isPiece;}
        bool getIsPlayer1()const{return isPlayer1;}
        bool getIsPlayer2()const{return isPlayer2;}
        int getPlayer()const{return player;}








};



#endif // TILE_H_INCLUDED
