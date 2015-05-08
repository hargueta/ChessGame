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
}

Piece::Piece(int pieceId) {
    this->pieceId = pieceId;
}

void Piece::setPieceId(int pieceId) {
    this->pieceId = pieceId;

    return;
}

void Piece::setPieceIcon(char pieceIcon) {
    this->pieceIcon = pieceIcon;

    return;
}
