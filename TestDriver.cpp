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

    int counter = 0;

    int fromX, fromY;
    int toX, toY;

    while(!board.getIsCheckmate()) {
        if(counter % 2 == 0) {
            cout << endl << "PLAYER ONE'S TURN" << endl;
        } else {
            cout << endl << "PLAYER TWO'S TURN" << endl;
        }

        if(counter % 2 == 0) {
            do {
                cout << "Enter the position of the piece you would like to move (x, y): ";
                cin >> fromX >> fromY;
                if(board.getTile(fromY - 1, fromX - 1).getIsPlayer1() && board.isValidPiece(fromY - 1, fromX - 1)) {
                    cout << "Is player one" << endl;
                    do {
                        cout << "Where would you like to move the piece? (x, y): ";
                        cin >> toX >> toY;
                        if(board.getTile(toY - 1, toX - 1).getIsPlayer2() || !board.isValidPiece(toY - 1, toX - 1)) {
                            cout << "Piece was moved" << endl;
                            cout << endl;
                            board.display();
                            counter++;
                        } else {
                            cout << "Invalid move" << endl;
                        }
                    }while(!board.getTile(fromY - 1, fromX - 1).getIsPlayer1() && board.isValidPiece(fromY - 1, fromX - 1));

                } else {
                    cout << "Invalid move!!!!!!\n";
                }

            }while(!board.getTile(fromY - 1, fromX - 1).getIsPlayer1());
        }

        else if(counter % 2 == 1) {
            cout << endl << counter << endl;
            do {
                cout << "Enter the position of the piece you would like to move: ";
                cin >> fromX >> fromY;
                if(board.getTile(fromY - 1, fromX - 1).getIsPlayer2() && board.isValidPiece(fromY - 1, fromX - 1)) {
                    cout << "Is player two" << endl;
                    cout << endl;
                    board.display();
                    counter++;
                } else {
                    cout << "Invalid move!!!!!!\n";
                }
            }while(!board.getTile(fromY - 1, fromX - 1).getIsPlayer2());
        }




    }

    return 0;
}
