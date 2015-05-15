// **********************************************************************
// Filename:
// Author: Hugo Argueta
//Author: Gabriel Zapata
//Author: Lesly Garcia
// Last Modified:
// Description:
// **********************************************************************


#include "Board.h"
#include "Tile.h"
#include "Piece.h"
#include<iostream>

using namespace std;

bool checkCanPieceMove(int fromX, int fromY, int toX, int toY, Board& board);

int main() {
    Board board;

    cout << "====================" << endl;
    cout << "||     Chess!     ||" << endl;
    cout << "====================" << endl << endl;

    board.setup();
    board.display();

    int counter = 0;

    bool pieceWasMoved;

    int fromX, fromY;
    int toX, toY;


    while(!board.getIsCheckmate()) {
        if(counter % 2 == 0) {
            pieceWasMoved = false;
            cout << "___________________" << endl << endl;
            cout << "PLAYER ONE'S TURN" << endl;
            cout << "___________________" << endl;
            do {
                cout << "Enter the position of the piece you would like to move: ";
                cin >> fromX >> fromY;
                if(board.getTile(fromY - 1, fromX - 1).getIsPlayer1() && board.isValidPiece(fromY - 1, fromX - 1)) {
                    do {
                        cout << "Where would you like to move the piece? (x, y): ";
                        cin >> toX >> toY;
                        if(board.getTile(toY - 1, toX - 1).getIsPlayer2() || !board.isValidPiece(toY - 1, toX - 1)) {
                            if(checkCanPieceMove(fromY - 1, fromX - 1, toY - 1, toX -1, board)) {
                                board.movePiece(fromY - 1, fromX - 1, toY - 1, toX - 1);
                                pieceWasMoved = true;
                                board.display();
                                counter++;
                            } else {
                                "Invalid placement\n\n";
                            }
                        } else {
                            cout << "Invalid placement\n\n";
                        }
                    }while(!pieceWasMoved);

                } else {
                    cout << "Invalid piece selection\n";
                }

            }while(board.getTile(fromY - 1, fromX - 1).getIsPlayer1());
        }

        if(counter % 2 == 1) {
            pieceWasMoved = false;
            cout << "___________________" << endl << endl;
            cout << "PLAYER TWO'S TURN" << endl;
            cout << "___________________" << endl;
            do {
                cout << "Enter the position of the piece you would like to move: ";
                cin >> fromX >> fromY;
                if(board.getTile(fromY - 1, fromX - 1).getIsPlayer2() && board.isValidPiece(fromY - 1, fromX - 1)) {
                    do {
                        cout << "Where would you like to move the piece? (x, y): ";
                        cin >> toX >> toY;
                        if(board.getTile(toY - 1, toX - 1).getIsPlayer1() || !board.isValidPiece(toY - 1, toX - 1)) {
                            if(checkCanPieceMove(fromY - 1, fromX - 1, toY - 1, toX -1, board)) {
                                board.movePiece(fromY - 1, fromX - 1, toY - 1, toX - 1);
                                pieceWasMoved = true;
                                board.display();
                                counter++;
                            } else {
                                cout << "Invalid placement\n\n";
                            }
                        } else {
                            cout << "Invalid placement\n\n";
                        }
                    }while(!pieceWasMoved);

                } else {
                    cout << "Invalid piece selection\n";
                }

            }while(board.getTile(fromY - 1, fromX - 1).getIsPlayer2());
        }




    }

    return 0;
}

bool checkCanPieceMove(int fromX, int fromY, int toX, int toY, Board& board) {
    switch(board.getTile(fromX, fromY).getPiece()) {
        case 100:
            return board.can_pawn_move(fromX, fromY, toX, toY);
        case 305:
            return board.can_bishop_move(fromX, fromY, toX, toY);
        case 300:
            return board.can_knight_move(fromX, fromY, toX, toY);
        case 500:
            return board.can_rook_move(fromX, fromY, toX, toY);
        case 900:
            return board.can_queen_move(fromX, fromY, toX, toY);
        case 200:
            return board.can_king_move(fromX, fromY, toX, toY);
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
