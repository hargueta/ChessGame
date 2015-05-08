#include "tile.h"
#include <cassert>
#include <iostream>
#include <cstring>

using namespace std;


Tile::Tile()
{
    piece = 0;
    isPiece = false;
}
//longest implementation method
void Tile::move_options()
{


}
void Tile::start_up()
{

}
        //code for start up.
        /*const startup[8][8] = { rook, knight, bishop, queen, king, bishop,
        knight, rook, pawn, pawn,pawn,pawn,pawn,pawn,pawn, pawn, 0, 0, 0, 0,
         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0, 0, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn,
          -rook, -knight, -bishop, -queen, -king, -bishop, -knight, -rook};*/
void Tile::setPiece(unsigned int piece)
{
    this->piece = piece;

}
void Tile::setIsPiece(bool isPiece)
{
    this->isPiece = isPiece;

}


