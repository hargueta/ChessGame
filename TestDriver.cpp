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

bool checkCanPieceMove(int fromX, int fromY, int toX, int toY, Board& board);

int main() {
    Board board;

    board.setup();
    board.display();

    int counter = 0;

    int fromX, fromY;
    int toX, toY;

    while(!board.getIsCheckmate()) {
        if(counter % 2 == 0) {
            cout << "___________________" << endl;
            cout << "PLAYER ONE'S TURN" << endl;
        } else {
            cout << "___________________" << endl;
            cout << "PLAYER TWO'S TURN" << endl;
        }

        if(counter % 2 == 0) {
            cout << endl << "P1 counter: " << counter << endl;
            do {
                cout << "Enter the position of the piece you would like to move: ";
                cin >> fromX >> fromY;
                if(board.getTile(fromY - 1, fromX - 1).getIsPlayer1() && board.isValidPiece(fromY - 1, fromX - 1)) {
                    cout << "Is player one" << endl;
                    do {
                        cout << "Where would you like to move the piece? (x, y): ";
                        cin >> toX >> toY;
                        if(board.getTile(toY - 1, toX - 1).getIsPlayer2() || !board.isValidPiece(toY - 1, toX - 1)) {
                            cout << "Piece was moved" << endl;
                            if(checkCanPieceMove(fromY - 1, fromX - 1, toY - 1, toX -1, board)) {
                                cout << endl << "Pawn can move" << endl;
                                board.movePiece(fromY - 1, fromX - 1, toY - 1, toX - 1);
                            }
                            /*
                            Piece piece;
                            piece.setPieceId(100);
                            piece.setPieceIcon('p');
                            cout << endl << board.can_pawn_move(fromY, fromX, toY, toX, piece) << endl << endl;
                            cout << endl;
                            board.getTile(fromY - 1, fromX - 1).setPiece(0);
                            board.getTile(fromY - 1, fromX - 1).setPieceIcon(' ');
                            board.getTile(fromY - 1, fromX -1).setIsPiece(false);
                            board.getTile(toY - 1, toX - 1).setPiece(100);
                            board.getTile(toY - 1, toX - 1).setPieceIcon('p');
                            board.getTile(toY - 1, toX - 1).setIsPiece(true);
                            */
                            board.display();
                            counter++;
                        } else {
                            cout << "Invalid move" << endl;
                        }
                    }while(board.getTile(toY - 1, toX - 1).getIsPlayer1() || board.isValidPiece(toY - 1, toX - 1));

                } else {
                    cout << "Invalid move!!!!!!\n";
                }

            }while(!board.getTile(fromY - 1, fromX - 1).getIsPlayer1());
        }

        if(counter % 2 == 1) {
            cout << endl << "P2 counter: " << counter << endl;
            do {
                cout << "Enter the position of the piece you would like to move: ";
                cin >> fromX >> fromY;
                if(board.getTile(fromY - 1, fromX - 1).getIsPlayer2() && board.isValidPiece(fromY - 1, fromX - 1)) {
                    cout << "Is player two" << endl;
                    do {
                        cout << "Where would you like to move the piece? (x, y): ";
                        cin >> toX >> toY;
                        if(board.getTile(toY - 1, toX - 1).getIsPlayer1() || !board.isValidPiece(toY - 1, toX - 1)) {
                            cout << "Piece was moved" << endl;
                            cout << endl;
                            board.display();
                            counter++;
                        } else {
                            cout << "Invalid move" << endl;
                        }
                    }while(board.getTile(toY - 1, toX - 1).getIsPlayer2() || board.isValidPiece(toY - 1, toX - 1));

                } else {
                    cout << "Invalid move!!!!!!\n";
                }

            }while(!board.getTile(fromY - 1, fromX - 1).getIsPlayer2());
        }




    }

    return 0;
}

bool checkCanPieceMove(int fromX, int fromY, int toX, int toY, Board& board) {
    switch(board.getTile(fromX, fromY).getPiece()) {
        case 100:
            cout << "Inside case" << endl;
            return board.can_pawn_move(fromX, fromY, toX, toY);
    }
}

/*
pawn = 100
bishop = 305
knight = 300
rook = 500
queen = 900
king = 200

*/
