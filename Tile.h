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

        //move options for each individual piece and these
        //will be called when we check what the selected piece
        //is whether its player 1s piece or player 2s piece.
        void pawn_move_option();
        void bishop_move_option();
        void knight_move_option();
        void rook_move_option();
        void queen_move_option();
        void king_move_option();


        void setPiece(int pieceId);
        void setPieceIcon(char icon);
        void setIsPiece(bool isPiece);
        void setIsPlayer1(bool isPlayer1);
        void setIsPlayer2(bool isPlayer2);

        int getPiece()const{return piece.getPieceId();}
        char getPieceIcon()const {return piece.getPieceIcon();}
        bool getIsPiece()const{return isPiece;}
        bool getIsPlayer1()const{return isPlayer1;}
        bool getIsPlayer2()const{return isPlayer2;}








};



#endif // TILE_H_INCLUDED
