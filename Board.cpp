#include "Board.h"
#include "Piece.h"
#include <iostream>

using namespace std;

Board::Board()
{
    isCheckmate = false;


}
        //default constructor


void Board::setup()
{
    //player 1
    //pawn setups
    for (int iCol = 0; iCol < 8; ++iCol) {
			arra[6][iCol].setPiece(100);
			arra[6][iCol].setPieceIcon('p');
			arra[6][iCol].setIsPiece(true);
			arra[6][iCol].setIsPlayer1(true);
			arra[6][iCol].setPlayer(1);
    }
    //rooks setup
    arra[7][0].setPiece(500);
    arra[7][0].setPieceIcon('r');
    arra[7][0].setIsPiece(true);
    arra[7][0].setIsPlayer1(true);
    arra[7][0].setPlayer(1);

    //knight setup
    arra[7][1].setPiece(300);
    arra[7][1].setPieceIcon('n');
    arra[7][1].setIsPiece(true);
    arra[7][1].setIsPlayer1(true);
    arra[7][1].setPlayer(1);

    //bishop setup
    arra[7][2].setPiece(305);
    arra[7][2].setPieceIcon('b');
    arra[7][2].setIsPiece(true);
    arra[7][2].setIsPlayer1(true);
    arra[7][2].setPlayer(1);

    //king setup
    arra[7][3].setPiece(200);
    arra[7][3].setPieceIcon('k');
    arra[7][3].setIsPiece(true);
    arra[7][3].setIsPlayer1(true);
    arra[7][3].setPlayer(1);

    //queen setup
    arra[7][4].setPiece(900);
    arra[7][4].setPieceIcon('q');
    arra[7][4].setIsPiece(true);
    arra[7][4].setIsPlayer1(true);
    arra[7][4].setPlayer(1);

    arra[7][5].setPiece(305);
    arra[7][5].setPieceIcon('b');
    arra[7][5].setIsPiece(true);
    arra[7][5].setIsPlayer1(true);
    arra[7][5].setPlayer(1);

    //knight set up
    arra[7][6].setPiece(300);
    arra[7][6].setPieceIcon('n');
    arra[7][6].setIsPiece(true);
    arra[7][6].setIsPlayer1(true);
    arra[7][6].setPlayer(1);

    //rook setup
    arra[7][7].setPiece(500);
    arra[7][7].setPieceIcon('r');
    arra[7][7].setIsPiece(true);
    arra[7][7].setIsPlayer1(true);
    arra[7][7].setPlayer(1);


    //player 2
    //pawn setup
    for(int iCol = 0; iCol < 8; ++iCol)
    {
        arra[1][iCol].setPiece(100);
        arra[1][iCol].setPieceIcon('P');
        arra[1][iCol].setIsPiece(true);
        arra[1][iCol].setIsPlayer2(true);
        arra[1][iCol].setPlayer(2);
    }
    //rook setup
    arra[0][0].setPiece(500);
    arra[0][0].setPieceIcon('R');
    arra[0][0].setIsPiece(true);
    arra[0][0].setIsPlayer2(true);
    arra[0][0].setPlayer(2);

    //knight setup
    arra[0][1].setPiece(300);
    arra[0][1].setPieceIcon('N');
    arra[0][1].setIsPiece(true);
    arra[0][1].setIsPlayer2(true);
    arra[0][1].setPlayer(2);

    //bishop setup
    arra[0][2].setPiece(305);
    arra[0][2].setPieceIcon('B');
    arra[0][2].setIsPiece(true);
    arra[0][2].setIsPlayer2(true);
    arra[0][1].setPlayer(2);

    //king setup
    arra[0][3].setPiece(200);
    arra[0][3].setPieceIcon('K');
    arra[0][3].setIsPiece(true);
    arra[0][3].setIsPlayer2(true);
    arra[0][3].setPlayer(2);

    //queen setup
    arra[0][4].setPiece(900);
    arra[0][4].setPieceIcon('Q');
    arra[0][4].setIsPiece(true);
    arra[0][4].setIsPlayer2(true);
    arra[0][4].setPlayer(2);

    //bishop setup
    arra[0][5].setPiece(305);
    arra[0][5].setPieceIcon('B');
    arra[0][5].setIsPiece(true);
    arra[0][5].setIsPlayer2(true);
    arra[0][5].setPlayer(2);

    //knight setup
    arra[0][6].setPiece(300);
    arra[0][6].setPieceIcon('N');
    arra[0][6].setIsPiece(true);
    arra[0][6].setIsPlayer2(true);
    arra[0][6].setPlayer(2);

    //rook setup
    arra[0][7].setPiece(500);
    arra[0][7].setPieceIcon('R');
    arra[0][7].setIsPiece(true);
    arra[0][7].setIsPlayer2(true);
    arra[0][7].setPlayer(2);
}

//the biggest function here.
//will confirm the move the player is making is valid, and within
//the move capabilities of the chess piece.
bool Board::can_pawn_move(int fromX, int fromY, int toX, int toY)
{
   //checks to see if the tile their moving to is a piece or not
   if(arra[toX][toY].getIsPiece() == false)
   {
       //tile moving to is not a piece if it passes the if statement
        cout << "First if" << endl;
        //checks the move and make sure its only a one tile up
        if(fromX == toX + 1)
        {
        cout << "Second if" << endl;
        //make sure the tile they are currently on is a pawn
        if(arra[fromX][fromY].getPiece() == 100) {
            cout << "Third if" << endl;
                if(toY == fromY){
                    cout << "Fourth if" << endl;
                    //if everything checks out, it returns a valid move
                    return true;
                }

            }else {
                if(toX == fromX - 1){
                    return true;
                }
            }
        }
  }else{
    // toX & toY holds piece of opposite color
			if ((fromX == toX + 1) || (fromX == toX - 1)) {
				if (arra[fromX][fromY].getPiece() == 100) {
					if (toY == fromY + 1) {
						return true;
					}
				} else {
					if (toY == fromY - 1) {
						return true;
					}
				}
			}
		}
		return false;
	}

bool Board::can_bishop_move(int fromX, int fromY, int toX, int toY)
{
    //make sure that the current piece is a bishop
    if(arra[fromX][fromY].getPiece() == 305) {

        //checks the move to see if its a valid move for a bishop
		if ((toX - fromX == toY - fromY) || (toX - fromX == fromY - toY)) {
			// Make sure that all invervening squares are empty
			int iRowOffset = (toY - fromY > 0) ? 1 : -1;
			int iColOffset = (toX - fromX > 0) ? 1 : -1;
			int iCheckRow;
			int iCheckCol;


			for (iCheckRow = fromY + iRowOffset, iCheckCol = fromX + iColOffset;
				iCheckRow !=  toY;
				iCheckRow = iCheckRow + iRowOffset, iCheckCol = iCheckCol + iColOffset)
			{
				if (arra[iCheckRow][iCheckCol].getIsPiece() != 0) {
					return false;
				}
			}
			return true;
		}
		return false;
	}
    return -1;
}
bool Board::can_knight_move(int fromX, int fromY, int toX, int toY)
{

		// Destination square is unoccupied or occupied by opposite color
		if ((fromX == toX + 1) || (fromX == toX - 1)) {
			if ((fromY == toY + 2) || (fromY == toY - 2)) {
				return true;
			}
		}
		if ((fromX == toX + 2) || (fromX == toX - 2)) {
			if ((fromY == toY + 1) || (fromY == toY - 1)) {
				return true;
			}
		}
		return false;


}
bool Board::can_rook_move(int fromX, int fromY, int toX, int toY)
{
    //checks to make sure the piece is a rook
    if(arra[fromX][fromY].getPiece() == 500) {


		if (fromY == toY) {
			// Make sure that all invervening squares are empty
			int iColOffset = (toX - fromX > 0) ? 1 : -1;
			for (int iCheckCol = fromX + iColOffset; iCheckCol !=  toX; iCheckCol = iCheckCol + iColOffset) {
				if (arra[fromY][iCheckCol].getIsPiece() != 0) {
					return false;
				}
			}
			return true;
			//checks to see if the rows are the same
		} else if (toX == fromX) {
			// Make sure that all invervening squares are empty
			int iRowOffset = (toY - fromY > 0) ? 1 : -1;
			for (int iCheckRow = fromY + iRowOffset; iCheckRow !=  toY; iCheckRow = iCheckRow + iRowOffset) {
				if (arra[iCheckRow][fromX].getIsPiece() != 0) {
					return false;
				}
			}
			return true;
		}
		return false;
	}


 return -1;
}
bool Board::can_queen_move(int fromX, int fromY, int toX, int toY)
{
    if(arra[fromX][fromY].getPiece() == 900) {

		if (fromY == toY) {
			// Make sure that all intervening squares are empty
			//uses ternary to set a variable for offset
			int iColOffset = (toX - toY > 0) ? 1 : -1;
			for (int iCheckCol = fromX + iColOffset; iCheckCol !=  toX; iCheckCol = iCheckCol + iColOffset) {
				if (arra[fromY][iCheckCol].getIsPiece() != 0) {
					return false;
				}
			}
			return true;
		} else if (toX == fromX) {
			// Make sure that all invervening squares are empty
			int iRowOffset = (toY - fromY > 0) ? 1 : -1;
			for (int iCheckRow = fromY + iRowOffset; iCheckRow !=  toY; iCheckRow = iCheckRow + iRowOffset) {
				if (arra[iCheckRow][fromX].getIsPiece() != 0) {
					return false;
				}
			}
			return true;
		} else if ((toX - fromX == toY - fromY) || (toX - fromX == fromY - toY)) {
			// Make sure that all invervening squares are empty
			int iRowOffset = (toY - fromY > 0) ? 1 : -1;
			int iColOffset = (toX - fromX > 0) ? 1 : -1;
			int iCheckRow;
			int iCheckCol;
			for (iCheckRow = fromY + iRowOffset, iCheckCol = fromX + iColOffset;
				iCheckRow !=  toY;
				iCheckRow = iCheckRow + iRowOffset, iCheckCol = iCheckCol + iColOffset)
			{
				if (arra[iCheckRow][iCheckCol].getIsPiece() != 0) {
					return false;
				}
			}
			return true;
		}
		return false;
	}

    return -1;

}
bool Board::can_king_move(int fromX, int fromY, int toX, int toY)
{
   if(arra[fromX][fromY].getPiece() == 200) {


		int iRowDelta = toY - fromY;
		int iColDelta = toX - fromX;
		if (((iRowDelta >= -1) && (iRowDelta <= 1)) &&
			((iColDelta >= -1) && (iColDelta <= 1)))
		{
			return true;
		}
		return false;
	}

    return -1;
}

void Board::movePiece(int fromX, int fromY, int toX, int toY) {
    int tempPieceId;
    char tempPieceIcon;
    bool tempIsPlayer1;
    bool tempIsPlayer2;
    bool tempIsPiece;

    tempPieceId = arra[fromX][fromY].getPiece();
    tempPieceIcon = arra[fromX][fromY].getPieceIcon();
    tempIsPlayer1 = arra[fromX][fromY].getIsPlayer1();
    tempIsPlayer2 = arra[fromX][fromY].getIsPlayer2();
    tempIsPiece = arra[fromX][fromY].getIsPiece();

    arra[fromX][fromY].setPiece(arra[toX][toY].getPiece());
    arra[fromX][fromY].setPieceIcon(arra[toX][toY].getPieceIcon());
    arra[fromX][fromY].setIsPlayer1(arra[toX][toY].getIsPlayer1());
    arra[fromX][fromY].setIsPlayer2(arra[toX][toY].getIsPlayer2());
    arra[fromX][fromY].setIsPiece(arra[toX][toY].getIsPiece());

    arra[toX][toY].setPiece(tempPieceId);
    arra[toX][toY].setPieceIcon(tempPieceIcon);
    arra[toX][toY].setIsPlayer1(tempIsPlayer1);
    arra[toX][toY].setIsPlayer2(tempIsPlayer2);
    arra[toX][toY].setIsPiece(tempIsPiece);

    return;
}

void Board::display()
{

    //setup();
    if(isCheckmate == false)
    {
        for (int i = 0; i < 8; i++)
        {

          for (int j = 0; j < 8; j++)
          {

                //keep refreshing board after each turn.
                if(arra[i][j].getIsPiece() == true)
                    cout << arra[i][j].getPieceIcon() << " ";

                //displays the tiles when they are empty and contain
                //zero pieces.
                if ( arra[i][j].getIsPiece() == false)
                {
                    if((i+j) % 2 == 1)
                    {
                        //white tiles
                        cout << char(176) << " ";
                    }
                    else
                        //black tiles
                        cout << char(178) << " ";
                }

          }
          // displays side border
          cout << "|" << i + 1;
          cout << endl;

        }
        //displays bottom border
        for(int i = 0; i < 8; i++) {
            cout << "--";
        }

        cout << endl;

        for(int i = 0; i < 8; i++) {
            cout <<  i + 1 << " ";
        }

        cout << endl << endl;


    }
    //loop goes here for update board every turn per player's turn.

}
        //should update board every move.

bool Board::IsInCheck(int player) {  //char cColor
		// Find the king
		int iKingRow;
		int iKingCol;
		for (int iRow = 0; iRow < 8; ++iRow) {
			for (int iCol = 0; iCol < 8; ++iCol) {
				if (arra[iRow][iCol].getIsPiece() != 0) {
					if (arra[iRow][iCol].getPlayer() == player) {
						if (arra[iRow][iCol].getPieceIcon() == 'K') {
							iKingRow = iRow;
							iKingCol = iCol;
						}
					}
				}
			}
		}
		// Run through the opponent's pieces and see if any can take the king
		for (int iRow = 0; iRow < 8; ++iRow) {
			for (int iCol = 0; iCol < 8; ++iCol) {
				if (arra[iRow][iCol].getIsPiece() != 0) {
					if (arra[iRow][iCol].getPlayer() != player) {
						if (arra[iRow][iCol].getPiece() == 100)
							    if(can_pawn_move(iRow, iCol, iKingRow,iKingCol) == true)
                                    return true;
							}
                        else if(arra[iRow][iCol].getPiece() == 305)
                            {
                                if(can_bishop_move(iRow, iCol, iKingRow,iKingCol) == true)
                                    return true;
                            }
                        else if(arra[iRow][iCol].getPiece() == 300)
                            {
                                if(can_knight_move(iRow,iCol,iKingRow,iKingCol))
                                    return true;
                            }
                        else if(arra[iRow][iCol].getPiece() == 500)
                            {
                                if(can_rook_move(iRow,iCol,iKingRow,iKingCol))
                                    return true;
                            }
                        else if(arra[iRow][iCol].getPiece() == 900)
                            {
                                if(can_queen_move(iRow,iCol,iKingRow,iKingCol))
                                    return true;
                            }
                        else if(arra[iRow][iCol].getPiece() == 200)
                            {
                                if(can_king_move(iRow,iCol,iKingRow,iKingCol))
                                    return true;
                            }
                      }
					}
				}



		return false;
}
/*
bool Board::canMove(int player)
{
		// Run through all pieces
		for (int iRow = 0; iRow < 8; ++iRow) {
			for (int iCol = 0; iCol < 8; ++iCol) {
				if (arra[iRow][iCol].getPiece() != 0) {
					// If it is a piece of the current player, see if it has a legal move
					if (arra[iRow][iCol].getPlayer() == player) {
						for (int iMoveRow = 0; iMoveRow < 8; ++iMoveRow) {
							for (int iMoveCol = 0; iMoveCol < 8; ++iMoveCol) {
								if (arra[iRow][iCol].getIsPiece() //add a way to choose which function to choose to see if its a legal move
            ) {
									// Make move and check whether king is in check

									arra[iMoveRow][iMoveCol].setIsPiece(arra[iRow][iCol].getIsPiece());
									arra[iRow][iCol].setIsPiece(0);
									bool bCanMove = !IsInCheck(player);
									// Undo the move
									arra[iRow][iCol]			= arra[iMoveRow][iMoveCol];
									if (bCanMove) {
										return true;
									}
								}
							}
						}
					}
				}
			}
		}
		return false;
}
*/

bool Board::isValidPiece(int x, int y) {
    if(arra[x][y].getPiece() != 0)
        return true;
    else
        return false;
}

void Board::setIsCheckmate(bool isCheckmate)
{
    this->isCheckmate = isCheckmate;
}
