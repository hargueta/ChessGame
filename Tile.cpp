#include "Piece.h"
#include "Tile.h"
#include <cassert>
#include <iostream>
#include <cstring>

using namespace std;


Tile::Tile()
{
    isPiece = false;
    isPlayer1 = false;
    isPlayer2 = false;
    x = 0;
    y = 0;

}
//the biggest function here.
//will confirm the move the player is making is valid, and within
//the move capabilities of the chess piece.
bool Tile::pawn_move_option(int fromX, int fromY, int toX, int toY)
{
  if(piece.getPieceId() == 100) {

            /*


		if (qpDest == 0) {
			// Destination square is unoccupied
			if (iSrcCol == iDestCol) {
				if (GetColor() == 'W') {
					if (iDestRow == iSrcRow + 1) {
						return true;
					}
				} else {
					if (iDestRow == iSrcRow - 1) {
						return true;
					}
				}
			}
		} else {
			// Dest holds piece of opposite color
			if ((iSrcCol == iDestCol + 1) || (iSrcCol == iDestCol - 1)) {
				if (GetColor() == 'W') {
					if (iDestRow == iSrcRow + 1) {
						return true;
					}
				} else {
					if (iDestRow == iSrcRow - 1) {
						return true;
					}
				}
			}
		}
		return false;
	}
            */

    }

}
bool Tile::bishop_move_option(int fromX, int fromY, int toX, int toY)
{
    if(piece.getPieceId() == 305) {
    /*

		if ((iDestCol - iSrcCol == iDestRow - iSrcRow) || (iDestCol - iSrcCol == iSrcRow - iDestRow)) {
			// Make sure that all invervening squares are empty
			int iRowOffset = (iDestRow - iSrcRow > 0) ? 1 : -1;
			int iColOffset = (iDestCol - iSrcCol > 0) ? 1 : -1;
			int iCheckRow;
			int iCheckCol;
			for (iCheckRow = iSrcRow + iRowOffset, iCheckCol = iSrcCol + iColOffset;
				iCheckRow !=  iDestRow;
				iCheckRow = iCheckRow + iRowOffset, iCheckCol = iCheckCol + iColOffset)
			{
				if (qpaaBoard[iCheckRow][iCheckCol] != 0) {
					return false;
				}
			}
			return true;
		}
		return false;
	}
    */
    }

}
bool Tile::knight_move_option(int fromX, int fromY, int toX, int toY)
{
	/*
		// Destination square is unoccupied or occupied by opposite color
		if ((iSrcCol == iDestCol + 1) || (iSrcCol == iDestCol - 1)) {
			if ((iSrcRow == iDestRow + 2) || (iSrcRow == iDestRow - 2)) {
				return true;
			}
		}
		if ((iSrcCol == iDestCol + 2) || (iSrcCol == iDestCol - 2)) {
			if ((iSrcRow == iDestRow + 1) || (iSrcRow == iDestRow - 1)) {
				return true;
			}
		}
		return false;
	}
	*/

}
bool Tile::rook_move_option(int fromX, int fromY, int toX, int toY)
{

    if(piece.getPieceId() == 500) {
    /*

		if (iSrcRow == iDestRow) {
			// Make sure that all invervening squares are empty
			int iColOffset = (iDestCol - iSrcCol > 0) ? 1 : -1;
			for (int iCheckCol = iSrcCol + iColOffset; iCheckCol !=  iDestCol; iCheckCol = iCheckCol + iColOffset) {
				if (qpaaBoard[iSrcRow][iCheckCol] != 0) {
					return false;
				}
			}
			return true;
		} else if (iDestCol == iSrcCol) {
			// Make sure that all invervening squares are empty
			int iRowOffset = (iDestRow - iSrcRow > 0) ? 1 : -1;
			for (int iCheckRow = iSrcRow + iRowOffset; iCheckRow !=  iDestRow; iCheckRow = iCheckRow + iRowOffset) {
				if (qpaaBoard[iCheckRow][iSrcCol] != 0) {
					return false;
				}
			}
			return true;
		}
		return false;
	}
    */
    }

}
bool Tile::queen_move_option(int fromX, int fromY, int toX, int toY)
{
    if(piece.getPieceId() == 900) {
    /*

		if (iSrcRow == iDestRow) {
			// Make sure that all invervening squares are empty
			int iColOffset = (iDestCol - iSrcCol > 0) ? 1 : -1;
			for (int iCheckCol = iSrcCol + iColOffset; iCheckCol !=  iDestCol; iCheckCol = iCheckCol + iColOffset) {
				if (qpaaBoard[iSrcRow][iCheckCol] != 0) {
					return false;
				}
			}
			return true;
		} else if (iDestCol == iSrcCol) {
			// Make sure that all invervening squares are empty
			int iRowOffset = (iDestRow - iSrcRow > 0) ? 1 : -1;
			for (int iCheckRow = iSrcRow + iRowOffset; iCheckRow !=  iDestRow; iCheckRow = iCheckRow + iRowOffset) {
				if (qpaaBoard[iCheckRow][iSrcCol] != 0) {
					return false;
				}
			}
			return true;
		} else if ((iDestCol - iSrcCol == iDestRow - iSrcRow) || (iDestCol - iSrcCol == iSrcRow - iDestRow)) {
			// Make sure that all invervening squares are empty
			int iRowOffset = (iDestRow - iSrcRow > 0) ? 1 : -1;
			int iColOffset = (iDestCol - iSrcCol > 0) ? 1 : -1;
			int iCheckRow;
			int iCheckCol;
			for (iCheckRow = iSrcRow + iRowOffset, iCheckCol = iSrcCol + iColOffset;
				iCheckRow !=  iDestRow;
				iCheckRow = iCheckRow + iRowOffset, iCheckCol = iCheckCol + iColOffset)
			{
				if (qpaaBoard[iCheckRow][iCheckCol] != 0) {
					return false;
				}
			}
			return true;
		}
		return false;
	}
    */
    }

}
bool Tile::king_move_option(int fromX, int fromY, int toX, int toY)
{
    if(piece.getPieceId() == 200) {
            /*

		int iRowDelta = iDestRow - iSrcRow;
		int iColDelta = iDestCol - iSrcCol;
		if (((iRowDelta >= -1) && (iRowDelta <= 1)) &&
			((iColDelta >= -1) && (iColDelta <= 1)))
		{
			return true;
		}
		return false;
	}*/
    }


}

void Tile::setPiece(int piece)
{
    this->piece.setPieceId(piece);
}
void Tile::setIsPiece(bool isPiece)
{
    this->isPiece = isPiece;
}

void Tile::setPieceIcon(char icon)
{
    this->piece.setPieceIcon(icon);
}

void Tile::setIsPlayer1(bool isPlayer1)
{
    this->isPlayer1= isPlayer1;
}

void Tile::setIsPlayer2(bool isPlayer2)
{
    this->isPlayer2= isPlayer2;

}




