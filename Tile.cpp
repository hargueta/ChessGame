#include "Piece.h"
#include "Tile.h"
#include <cassert>
#include <iostream>
#include <cstring>

using namespace std;


Tile::Tile()
{
    isPiece = false;
    isPlayer1 = false;
    isPlayer2 = false;
    x = 0;
    y = 0;

}
//the biggest function here.
void Tile::move_options()
{
    if(piece.getPieceId() == 100) {

    }

    else if(piece.getPieceId() == 200) {

    }

    else if(piece.getPieceId() == 300) {

    }

    else if(piece.getPieceId() == 305) {

    }

    else if(piece.getPieceId() == 500) {

    }

    else if(piece.getPieceId() == 900) {

    }
}

void Tile::setPiece(int piece)
{
    this->piece.setPieceId(piece);
}
void Tile::setIsPiece(bool isPiece)
{
    this->isPiece = isPiece;
}

void Tile::setPieceIcon(char icon)
{
    this->piece.setPieceIcon(icon);
}

void Tile::setIsPlayer1(bool isPlayer1)
{
    this->isPlayer1= isPlayer1;
}

void Tile::setIsPlayer2(bool isPlayer2)
{
    this->isPlayer2= isPlayer2;

}




