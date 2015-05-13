// **********************************************************************
// Filename:
// Author: Hugo Argueta
// Last Modified:
// Description:
// **********************************************************************
//

#include "Board.h"
#include "Tile.h"
#include "Piece.h"
#include<iostream>

using namespace std;

int main() {
    Board board;

    board.setup();
    board.display();
    //board.setup();

    return 0;
}
