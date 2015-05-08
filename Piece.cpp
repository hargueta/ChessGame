// **********************************************************************
// Filename:
// Author: Hugo Argueta
// Last Modified:
// Description:
// **********************************************************************
//

#include "Piece.h"

using namespace std;

Piece::Piece() {
    pieceId = 0;
    pieceIcon = ' ';
}

Piece::Piece(int pieceId, char pieceIcon) {
    this->pieceId = pieceId;
    this->pieceIcon = pieceIcon;
}

void Piece::setPieceId(int pieceId) {
    this->pieceId = pieceId;

    return;
}

void Piece::setPieceIcon(char pieceIcon) {
    this->pieceIcon = pieceIcon;

    return;
}
