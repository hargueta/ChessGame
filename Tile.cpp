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

void Tile::setPieceId(int piece)
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


