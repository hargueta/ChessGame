// **********************************************************************
// Filename:
// Author: Hugo Argueta
// Last Modified:
// Description:
// **********************************************************************
//

#include "Piece.h"
#include "Tile.h"
#include<iostream>

using namespace std;

int main() {
    Tile tile;

    tile.setPiece(100);

    cout << tile.getPiece() << endl;
    cout << tile.getIsPiece() << endl;

    tile.setIsPiece(true);
    cout << tile.getIsPiece() << endl;

    tile.setPiece(200);
    cout << tile.getPiece() << endl;

    Piece piece;

    cout << piece.getPieceIcon() << "Icon" << endl;
    cout << piece.getPieceId() << endl;

    piece.setPieceId(400);
    piece.setPieceIcon('R');

    cout << piece.getPieceIcon() << endl;
    cout << piece.getPieceId() << endl;

    return 0;
}
