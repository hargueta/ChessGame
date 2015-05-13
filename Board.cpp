#include "Board.h"
#include <iostream>

using namespace std;

Board::Board()
{
    const char startup[8][8] = { 'R', 'N', 'B', 'Q', 'K', 'B',
        'N', 'R', 'P', 'P','P','P','P','P','P', 'P', ' ', ' ', ' ', ' ',
         ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
          ' ', ' ', ' ', ' ', ' ', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p',
          'r', 'n', 'b', 'k', 'q', 'b', 'n', 'r'};

}
        //default constructor


void Board::setup()
{
    int i, j;

    for (i = 0; i < 8; i++)
        {
          for (j = 0; j < 8; j++)
          {
                arra[i][j].setPieceId(100);//<<<<-----put the char value OR int value within this array of Tiles.
                // cout << arra[i][j].getPiece(); //setup starting position
                arra[i][j].setPieceIcon('P');
                //cout << arra[i][j].getPieceIcon();
                cout << arra[i][j].getPieceId();
          }
          cout << endl;
        }
}


void Board::display()
{
    //ADD isCheckmate in board class
    if(isCheckmate != false)
    {
        for (int i = 0; i < 8; i++)
        {
          for (int j = 0; j < 8; j++)
          {
            cout << arra[i][j].getPieceId(); //setup starting position

          }
          cout << endl;

        }

    }
    //loop goes here for update board every turn per player's turn.

}
        //should update board every move.
