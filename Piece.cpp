// **********************************************************************
// Filename:
// Author: Hugo Argueta
// Last Modified: 05/08/15
// Description:
// **********************************************************************
//

#include "Piece.h"

using namespace std;

//default constructor. Initialized variables.
Piece::Piece() {
    //piece initialized to zero.
    pieceId = 0;
    //pieceIcon is empty.
    pieceIcon = ' ';
}

//overloaded constructor: include pieceId and pieceIcon
Piece::Piece(int pieceId, char pieceIcon) {
    this->pieceId = pieceId;
    this->pieceIcon = pieceIcon;
}

//Mutator method for pieceId
void Piece::setPieceId(int pieceId) {
    this->pieceId = pieceId;

    return;
}

//Mutator method for pieceIcon
void Piece::setPieceIcon(char pieceIcon) {
    this->pieceIcon = pieceIcon;

    return;
}
