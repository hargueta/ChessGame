#include "Piece.h"
#include "Tile.h"
#include <cassert>
#include <iostream>
#include <cstring>

using namespace std;


Tile::Tile()
{
    isPiece = false;
}
//longest implementation method[WORK DURING THE WEEKEND ON THIS]
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


