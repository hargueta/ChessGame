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

    int counter = 0;

    int x, y;

    while(!board.getIsCheckmate()) {
        if(counter % 2 == 0) {
            cout << "PLAYER ONE'S TURN" << endl;
        } else {
            cout << "PLAYER TWO'S TURN" << endl;
        }

        if(counter % 2 == 0) {
            cout << endl << counter << endl;
            do {
                cout << "Enter the position of the piece you would like to mmove: ";
                cin >> x >> y;
                if(board.getTile(y - 1, x - 1).getIsPlayer1() && board.isValidPiece(y - 1, x - 1)) {
                    cout << "Is player one" << endl;
                    counter++;
                } else {
                    cout << "Invalid move!!!!!!\n";
                }

            }while(!board.getTile(y - 1, x - 1).getIsPlayer1());
        }

        else if(counter % 2 == 1) {
            cout << endl << counter << endl;
            do {
                cout << "Enter the position of the piece you would like to mmove: ";
                cin >> x >> y;
                if(board.getTile(y - 1, x - 1).getIsPlayer2() && board.isValidPiece(y - 1, x - 1)) {
                    cout << "Is player two" << endl;
                    counter++;
                } else {
                    cout << "Invalid move!!!!!!\n";
                }
            }while(!board.getTile(y - 1, x - 1).getIsPlayer2());
        }




    }

    return 0;
}
