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

}
//the biggest function here.
void Tile::move_options()
{



}

void Tile::setPiece(int piece)
{
    this->piece.setPieceId(piece);

}
void Tile::setIsPiece(bool isPiece)
{
    this->isPiece = isPiece;

}

void Tile::setIsPlayer1(bool isPlayer1)
{
    this->isPlayer1= isPlayer1;
}
void Tile::setIsPlayer2(bool isPlayer2)
{
    this->isPlayer2= isPlayer2;

}




