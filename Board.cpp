#include "Board.h"
#include <iostream>

using namespace std;

Board::Board()
{
    isCheckmate = false;


}
        //default constructor


void Board::setup()
{
    //black pieces
    for (int iCol = 0; iCol < 8; ++iCol) {
			arra[6][iCol].setPiece(100);
			arra[6][iCol].setIsPiece(true);
			arra[6][iCol].setIsPlayer1(true);
    }

    arra[7][0].setPiece(500);
    arra[7][0].setIsPiece(true);
    arra[7][0].setIsPlayer1(true);

    arra[7][1].setPiece(300);
    arra[7][1].setIsPiece(true);
    arra[7][1].setIsPlayer1(true);

    arra[7][2].setPiece(305);
    arra[7][2].setIsPiece(true);
    arra[7][2].setIsPlayer1(true);

    arra[7][3].setPiece(2000);
    arra[7][3].setIsPiece(true);
    arra[7][3].setIsPlayer1(true);

    arra[7][4].setPiece(900);
    arra[7][4].setIsPiece(true);
    arra[7][4].setIsPlayer1(true);

    arra[7][5].setPiece(305);
    arra[7][5].setIsPiece(true);
    arra[7][5].setIsPlayer1(true);

    arra[7][6].setPiece(300);
    arra[7][6].setIsPiece(true);
    arra[7][6].setIsPlayer1(true);

    arra[7][7].setPiece(500);
    arra[7][7].setIsPiece(true);
    arra[7][7].setIsPlayer1(true);


    //white pieces
    for(int iCol = 0; iCol < 8; ++iCol)
    {
        arra[1][iCol].setPiece(100);
        arra[1][iCol].setIsPiece(true);
        arra[1][iCol].setIsPlayer2(true);
    }

    arra[0][0].setPiece(500);
    arra[0][0].setIsPiece(true);
    arra[0][0].setIsPlayer2(true);

    arra[0][1].setPiece(300);
    arra[0][1].setIsPiece(true);
    arra[0][1].setIsPlayer2(true);

    arra[0][2].setPiece(305);
    arra[0][2].setIsPiece(true);
    arra[0][2].setIsPlayer2(true);

    arra[0][3].setPiece(2000);
    arra[0][3].setIsPiece(true);
    arra[0][3].setIsPlayer2(true);

    arra[0][4].setPiece(900);
    arra[0][4].setIsPiece(true);
    arra[0][4].setIsPlayer2(true);

    arra[0][5].setPiece(305);
    arra[0][5].setIsPiece(true);
    arra[0][5].setIsPlayer2(true);

    arra[0][6].setPiece(300);
    arra[0][6].setIsPiece(true);
    arra[0][6].setIsPlayer2(true);

    arra[0][7].setPiece(500);
    arra[0][7].setIsPiece(true);
    arra[0][7].setIsPlayer2(true);
}


void Board::display()
{
    //ADD isCheckmate in board class
    setup();
    while(isCheckmate !=false)
    {
        for (int i = 0; i < 8; i++)
        {
          for (int j = 0; j < 8; j++)
          {
             //keep refreshing board after each turn.

          }
          cout << endl;

        }

    }
    //loop goes here for update board every turn per player's turn.

}
        //should update board every move.
